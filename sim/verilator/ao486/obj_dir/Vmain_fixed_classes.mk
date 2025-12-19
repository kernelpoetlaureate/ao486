# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmain_fixed.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmain_fixed \
	Vmain_fixed___024root__DepSet_hbe0c3754__0 \
	Vmain_fixed___024root__DepSet_hb81f4bf8__0 \
	Vmain_fixed___024root__DepSet_hb81f4bf8__1 \
	Vmain_fixed___024root__DepSet_hb81f4bf8__2 \
	Vmain_fixed___024root__DepSet_hb81f4bf8__3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmain_fixed__ConstPool_0 \
	Vmain_fixed___024root__Slow \
	Vmain_fixed___024root__DepSet_hbe0c3754__0__Slow \
	Vmain_fixed___024root__DepSet_hb81f4bf8__0__Slow \
	Vmain_fixed___024root__DepSet_hb81f4bf8__1__Slow \
	Vmain_fixed___024root__DepSet_hb81f4bf8__2__Slow \
	Vmain_fixed___024root__DepSet_hb81f4bf8__3__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmain_fixed__Trace__0 \
	Vmain_fixed__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmain_fixed__Syms \
	Vmain_fixed__Trace__0__Slow \
	Vmain_fixed__TraceDecls__0__Slow \
	Vmain_fixed__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
