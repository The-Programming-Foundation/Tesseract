/* $FreeBSD: stable/12/secure/lib/libcrypto/amd64/aesni-gcm-x86_64.S 359186 2020-03-20 21:43:08Z jkim $ */
/* Do not modify. This file is auto-generated from aesni-gcm-x86_64.pl. */
.text	

.globl	aesni_gcm_encrypt
.type	aesni_gcm_encrypt,@function
aesni_gcm_encrypt:
.cfi_startproc	
	xorl	%eax,%eax
	.byte	0xf3,0xc3
.cfi_endproc	
.size	aesni_gcm_encrypt,.-aesni_gcm_encrypt

.globl	aesni_gcm_decrypt
.type	aesni_gcm_decrypt,@function
aesni_gcm_decrypt:
.cfi_startproc	
	xorl	%eax,%eax
	.byte	0xf3,0xc3
.cfi_endproc	
.size	aesni_gcm_decrypt,.-aesni_gcm_decrypt
