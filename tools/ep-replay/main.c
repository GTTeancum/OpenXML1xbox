/* Offline EP transfer replay. No game program/data is embedded here.
 * Input: capture-transfer records (kind,address,size,payload).
 * Output: FIFO records (index,size,payload), all little-endian uint32 headers.
 * This is a diagnostic, not a full machine-state recording/replay system. */
#include "dsp.h"
#include <stdio.h>
#include <stdlib.h>

static FILE *input, *output;
static unsigned reads, writes, frames;

static void fail(const char *message, int status)
{
    fprintf(stderr, "%s (reads=%u writes=%u frames=%u)\n", message, reads, writes, frames);
    exit(status);
}

static void consume(uint8_t *data, uint32_t kind, uint32_t address, size_t size)
{
    uint32_t header[3];
    for (;;) {
        size_t count = fread(header, 1, sizeof(header), input);
        if (!count && feof(input)) {
            if (fflush(output)) fail("Output flush failed", 2);
            printf("Capture consumed: reads=%u writes=%u frames=%u\n", reads, writes, frames);
            exit(0);
        }
        if (count != sizeof(header) || header[0] > 3 || header[2] > 64u*1024u*1024u)
            fail("Invalid or truncated transfer header", 2);
        if (header[0] != 1 && header[0] != 3) {
            /* Read rather than seek: truncation of an ignored payload is still an error. */
            uint8_t discard[4096];
            for (uint32_t remaining = header[2]; remaining;) {
                size_t chunk = remaining < sizeof(discard) ? remaining : sizeof(discard);
                if (fread(discard, 1, chunk, input) != chunk) fail("Truncated GP payload", 2);
                remaining -= (uint32_t)chunk;
            }
            continue;
        }
        if (header[0] != kind || header[1] != address || header[2] != size) {
            fprintf(stderr, "Expected %u/%x/%u; requested %u/%x/%zu\n",
                    header[0], header[1], header[2], kind, address, size);
            fail("EP transfer mismatch", 3);
        }
        if (fread(data, 1, size, input) != size) fail("Truncated EP payload", 2);
        ++reads;
        return;
    }
}

static void scratch(void *opaque, uint8_t *data, uint32_t address, size_t size, bool write)
{
    /* Subsequent reads come from the capture, which already includes observed writes. */
    if (!write) consume(data, 3, address, size);
}

static void fifo(void *opaque, uint8_t *data, unsigned index, size_t size, bool write)
{
    if (!write) { consume(data, 1, index, size); return; }
    uint32_t header[2] = {index, (uint32_t)size};
    if (fwrite(header, 1, sizeof(header), output) != sizeof(header) ||
        fwrite(data, 1, size, output) != size) fail("FIFO output write failed", 2);
    ++writes;
}

int main(int argc, char **argv)
{
    if (argc != 3) { fprintf(stderr, "Usage: ep-replay capture.bin output.bin\n"); return 2; }
    input = fopen(argv[1], "rb");
    /* Exclusive creation prevents accidentally overwriting the input or earlier evidence. */
    output = fopen(argv[2], "wbx");
    if (!input || !output) fail("Cannot open input or create new output", 2);
    DSPState *dsp = dsp_init(NULL, scratch, fifo, false);
    dsp_bootstrap(dsp);
    const bool step = getenv("EP_REPLAY_STEP") != NULL;
    for (frames = 0; frames < 10000; ++frames) {
        dsp_start_frame(dsp);
        dsp_set_halt_requested(dsp, false);
        dsp_set_cycle_count(dsp, 0);
        unsigned runs = 0;
        do {
            if (step) dsp_step(dsp); else dsp_run(dsp, 1000);
            if (++runs > (step ? 1000000u : 100000u)) fail("Frame execution limit", 4);
        } while (!dsp_get_halt_requested(dsp));
    }
    fail("Capture exceeds frame limit", 4);
}
