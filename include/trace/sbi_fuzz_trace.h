#ifndef SBI_FUZZ_TRACE_H
#define SBI_FUZZ_TRACE_H

#include <inttypes.h>

/* Implemented in trace/qmp.c */
void sbi_fuzz_record_tb_exec(uint64_t pc);

#endif