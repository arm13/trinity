/*
 * long sys_rt_sigreturn(struct pt_regs *regs)
 */
#include "sanitise.h"

struct syscallentry syscall_rt_sigreturn = {
	.name = "rt_sigreturn",
	.num_args = 1,
	.flags = AVOID_SYSCALL, // Confuses the signal state and causes the fuzzer to hang with timeout not firing
	.arg1name = "regs",
	.arg1type = ARG_ADDRESS,
};
