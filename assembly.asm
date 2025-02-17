gss	.file	"lowest_common_multiple.c"
	.text
	.globl	highest_common_denominator
	.def	highest_common_denominator;	.scl	2;	.type	32;	.endef
	.seh_proc	highest_common_denominator
highest_common_denominator:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	jmp	.L2
.L3:
	movl	16(%rbp), %eax
	cltd
	idivl	24(%rbp)
	movl	%edx, -4(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, 16(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, 24(%rbp)
.L2:
	cmpl	$0, 24(%rbp)
	jg	.L3
	movl	16(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	lowest_common_multiple
	.def	lowest_common_multiple;	.scl	2;	.type	32;	.endef
	.seh_proc	lowest_common_multiple
lowest_common_multiple:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movl	%ecx, 32(%rbp)
	movl	%edx, 40(%rbp)
	movl	32(%rbp), %eax
	imull	40(%rbp), %eax
	movl	%eax, %ebx
	movl	40(%rbp), %edx
	movl	32(%rbp), %eax
	movl	%eax, %ecx
	call	highest_common_denominator
	movl	%eax, %ecx
	movl	%ebx, %eax
	cltd
	idivl	%ecx
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
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
	movl	$15, -4(%rbp)
	movl	$20, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	lowest_common_multiple
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
