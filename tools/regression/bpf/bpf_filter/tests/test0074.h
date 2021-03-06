/*-
 * Test 0074:	Divide by 0 (BPF_ALU+BPF_DIV+BPF_X)
 *
 * $FreeBSD: stable/12/tools/regression/bpf/bpf_filter/tests/test0074.h 307708 2016-10-21 06:56:30Z jkim $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_IMM, 0xa7c2da06),
	BPF_STMT(BPF_LDX+BPF_IMM, 0),
	BPF_STMT(BPF_ALU+BPF_DIV+BPF_X, 0),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0;

/* Expected signal */
static int	expect_signal =	0;
