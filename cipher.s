.file			"cipher.s"

.global cipher
.type cipher, %function

cipher:

			push		%ebp
			movl 		%esp, %ebp
			andl		$-16, %esp
			subl		$32,	%esp

			movl		12(%ebp), %eax				# Get word
			movl		16(%ebp), %ebx				# Get option
			movl		20(%ecx), %ecx				#	number of shift s




			leave
			ret
