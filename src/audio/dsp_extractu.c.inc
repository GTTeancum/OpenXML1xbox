/* DSP56300FM Rev. 5, pp. 13-72/73: EXTRACTU immediate.
 * https://www.nxp.com/docs/en/reference-manual/DSP56300FM.pdf
 * Standalone interpreter extension; no game-specific substitutions. */
static void emu_extractu_imm(dsp_core_t *dsp)
{
    const unsigned source = (dsp->cur_inst >> 4) & 1;
    const unsigned dest = dsp->cur_inst & 1;
    const uint32_t control = read_memory_p(dsp, dsp->pc + 1);
    const uint32_t old_sr = dsp->registers[DSP_REG_SR];
    /* The inherited CCR helper only implements normal arithmetic mode. */
    assert(!(old_sr & (1u << 17)) && "EXTRACTU sixteen-bit arithmetic mode not implemented");
    const unsigned offset = control & 63;
    const unsigned width = (control >> 12) & 63;
    assert(offset + width <= 56 && "Undefined EXTRACTU field outside accumulator");
    const uint64_t input =
        ((uint64_t)(dsp->registers[source ? DSP_REG_B2 : DSP_REG_A2] & 255) << 48) |
        ((uint64_t)(dsp->registers[source ? DSP_REG_B1 : DSP_REG_A1] & 0xffffff) << 24) |
        (dsp->registers[source ? DSP_REG_B0 : DSP_REG_A0] & 0xffffff);
    const uint64_t output = (input >> offset) & ((UINT64_C(1) << width) - 1);
    const uint32_t high = (uint32_t)(output >> 48) & 255;
    const uint32_t middle = (uint32_t)(output >> 24) & 0xffffff;
    const uint32_t low = (uint32_t)output & 0xffffff;
    dsp->registers[dest ? DSP_REG_B2 : DSP_REG_A2] = high;
    dsp->registers[dest ? DSP_REG_B1 : DSP_REG_A1] = middle;
    dsp->registers[dest ? DSP_REG_B0 : DSP_REG_A0] = low;
    emu_ccr_update_e_u_n_z(dsp, high, middle, low);
    dsp->registers[DSP_REG_SR] &= ~((1u << DSP_SR_V) | (1u << DSP_SR_C));
    dsp->registers[DSP_REG_SR] |= old_sr & 0xff0000;
    dsp->cur_inst_len++;
}
