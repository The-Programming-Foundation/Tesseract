/*-
 * Test 0014:	BPF_STX & BPF_LD+BPF_MEM
 *
 * $FreeBSD: stable/12/tools/regression/bpf/bpf_filter/tests/test0014.h 307708 2016-10-21 06:56:30Z jkim $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LDX+BPF_IMM, 0xdeadc0de),
	BPF_STMT(BPF_STX, 7),
	BPF_STMT(BPF_LD+BPF_MEM, 7),
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
static u_int	expect =	0xdeadc0de;

/* Expected signal */
static int	expect_signal =	0;