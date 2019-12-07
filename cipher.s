.file			"cipher.s"

.global cipher
.type cipher, %function

cipher:

			push		%ebp
			movl 		%esp, %ebp
			andl		$-16, %esp
			subl		$32,  %esp

			movl		8(%ebp),  %eax				# Get word
			movl		12(%ebp), %edx				# Get direction
			movl		16(%ebp), %ebx				# number of shifts


.condition:
			cmpl		$'a', %eax  #a
			jl			.end
			cmpl		$'z', %eax #z
			jg			.end	
			
			cmpl		$1, %edx
			je			.encrypt
			cmpl		$2, %edx
			je			.decrypt


.decrypt:

			subl		%ebx, %eax
			cmpl		$'a', %eax
			jl			.dec
			jmp 		.end
		
			
.encrypt:
			addl		%ebx, %eax
			cmpl		$'z', %eax
			jg			.enc
			jmp     	.end
			
			
.dec:	
			addl		$'z', %eax
			subl		$'a', %eax
			addl		$1,   %eax
			
			jmp 		.end
			
.enc:

	subl		$'z', %eax
	addl		$'a', %eax
	subl		$1,  %eax
		


.end:
			movl %eax, 12(%ebp)
			
			leave
			ret
