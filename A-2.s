	.file	"A-2.c"
	.text
	.comm	Z, 4, 2
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	Z(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	cmpl	$9, -12(%rbp)
	jg	.L2
	movl	$5, -4(%rbp)
	movl	$17, -8(%rbp)
	jmp	.L3
.L2:
	movl	$6, -4(%rbp)
	movl	$20, -8(%rbp)
	cmpl	$0, -12(%rbp)
	jne	.L3
	movl	$0, -8(%rbp)
.L3:
	movl	-4(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%eax, %edx
	leaq	Z(%rip), %rax
	movl	%edx, (%rax)
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.3.0"
