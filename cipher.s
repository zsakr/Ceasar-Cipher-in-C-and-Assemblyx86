# @author Ziad Sakr
# @version 1.0 Dec 7th 2019

.file			"cipher.s"

#call function cipher from the C file
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
			
			cmpl		$1, %edx   #check if user enter 1
			je			.encode # jumb encrypt 
			cmpl		$2, %edx # if enter 2 
			je			.decode # jumb to decrypt


#decode funtion
.decode:

			subl		%ebx, %eax    
			cmpl		$'a', %eax
			jl			.decrypt
			jmp 		.end
		
#encode funtion			
.encode:
			addl		%ebx, %eax
			cmpl		$'z', %eax
			jg			.encrypt
			jmp     	.end
			
#decrypt			
.decrypt:	
			addl		$'z', %eax
			subl		$'a', %eax
			addl		$1,   %eax
			
			jmp 		.end
#encrypt			
.encrypt:

	subl		$'z', %eax
	addl		$'a', %eax
	subl		$1,  %eax
		


.end:
			movl %eax, 12(%ebp)    #store the word back to base pointer on the stack
			
			leave
			ret
