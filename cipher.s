.file			"cipher.s"

.global cipher
.type cipher, %function

cipher:

			push		%ebp
			movl 		%esp, %ebp
			andl		$-16, %esp
			subl		$32,	%esp

			movl		12(%ebp), %esi				# Get word
			movl		16(%ebp), %eax				# Get direction
			movl		20(%ecx), %ecx				#	number of shifts

			movl		$0x9E3779B9, %edx			# initalize the round constand amd keep in edx

.loop:


			cmpl		$1, %eax
			je			encrypt

.decrypt:
			jmp 	end
.encrypt:


.end:

			leave
			ret
