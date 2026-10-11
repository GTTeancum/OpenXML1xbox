#ifndef XML1_CHARACTER_TALENT_STREAM_H
#define XML1_CHARACTER_TALENT_STREAM_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Native CharacterManager saves are synchronous. Bind the enclosing section's
 * version to its stream on this thread; a different stream must establish its
 * own section first. No guessing from record contents or global last-save mode. */
int xml1_talent_stream_begin(uint32_t stream, unsigned section_version);
void xml1_talent_stream_reset(void);
unsigned xml1_talent_stream_record_bytes(uint32_t stream);
#ifdef __cplusplus
}
#endif
#endif
