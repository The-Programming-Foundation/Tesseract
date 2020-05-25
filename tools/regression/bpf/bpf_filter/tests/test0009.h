/*-
 * Test 0009:	BPF_LDX+BPF_IMM & BPF_LD+BPF_W+BPF_IND
 *
 * $FreeBSD: stable/12/tools/regression/bpf/bpf_filter/tests/test0009.h 307708 2016-10-21 06:56:30Z jkim $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LDX+BPF_IMM, 1),
	BPF_STMT(BPF_LD+BPF_W+BPF_IND, 1),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x01, 0x23, 0x45, 0x67, 0x89, 0xab,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0x456789ab;

/* Expected signal */
static int	expect_signal =	0;