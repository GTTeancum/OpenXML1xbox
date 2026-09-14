NXDK_DIR ?= /c/nxdk
XBE_TITLE = XML1 NXDK Port
OUTPUT_DIR = bin
ROOT := $(abspath ..)
GEN := $(ROOT)/src/recomp/gen
PORT_SRCS := $(wildcard $(CURDIR)/*.c)
SRCS := $(wildcard $(GEN)/recomp_*.c) $(PORT_SRCS)
CFLAGS += -std=gnu11 -Os -ffunction-sections -fdata-sections -Wno-parentheses-equality -Wno-unused-value -Wno-tautological-constant-out-of-range-compare
CFLAGS += -I$(GEN) -I$(CURDIR) -I$(ROOT)/src -include $(CURDIR)/compat.h
LDFLAGS += -map:xml1.map -stack:1048576 -opt:ref -base:0x01000000
include $(NXDK_DIR)/Makefile
$(addsuffix .obj,$(basename $(wildcard $(GEN)/recomp_*.c))): $(GEN)/recomp_types.h $(CURDIR)/compat.h $(CURDIR)/context.h
$(CURDIR)/kernel.obj: $(CURDIR)/native_imports.inc $(CURDIR)/imports.inc
$(CURDIR)/runtime.obj $(CURDIR)/main.obj $(CURDIR)/selftest.obj $(CURDIR)/memory.obj: $(GEN)/recomp_types.h $(CURDIR)/port.h
$(addsuffix .obj,$(basename $(PORT_SRCS))): $(GEN)/recomp_types.h $(CURDIR)/port.h $(CURDIR)/context.h $(CURDIR)/compat.h
# No compiler-generated SIMD before the interrupt bridge saves FPU state.
$(CURDIR)/kernel.obj $(CURDIR)/callbacks.obj: CFLAGS += -mno-sse -mno-sse2 -mno-mmx -fno-vectorize -fno-slp-vectorize
CXBE = $(CURDIR)/tools/cxbe/cxbe
$(OUTPUT_DIR)/default.xbe: $(CXBE)
$(CXBE): $(wildcard $(CURDIR)/tools/cxbe/*.cpp) $(wildcard $(CURDIR)/tools/cxbe/*.h)
	$(MAKE) -C $(CURDIR)/tools/cxbe CXX=clang++
