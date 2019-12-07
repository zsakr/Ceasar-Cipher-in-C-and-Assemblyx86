/*
* @author Ziad Sakr
* @version 1.0 Dec 7th 2019
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10

//exter cipher from assembly function
extern char cipher(char c, int direcion, int shift);


int main(){
	//Decalring all needed variables
	int c;
	int direcion = 1;
	int shift,i;
	char str[N];
	char exit[N];
	char fun[N];
   	int size = 0;

	//Loop until it hit "N"
	while(1) {
		/*
		* Ask user for input of the word
		* and then convert all words to lower case using 
		* tolower build in function
		*/
		i = 0;
		size = 0;
		printf("Enter a word: \n");
		while((c = getchar()) != '\n'){
			fun[i] = tolower(c);
			i++;
			size++;
		}
				// Ask user to choose encrypt or decrypt
				printf("(1) Encrypt (2) Decrypt: \n");
				scanf("%d", &direcion);
				//while loop to check if user enter different numbers
			while(direcion != 1 || direcion != 2){
			//encrypt
				if(direcion == 1){
					
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
					}
					//decrypt
				if(direcion == 2){
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
					}
				/*
				* if user enter invalid number then keep asking
				*/
				else{
					
						printf("Please Enter a valid input\n");
						printf("(1) Encrypt (2) Decrypt: \n");
						scanf("%d", &direcion);
					
				}
				
			
		}
		//Ask user if want to keep going or no
		printf("\nDo another(Y/N)\n");
		for(i = 0; i < 1; i++)
			scanf("%s", exit);
		c = getchar();
		// loop to check if user enter different command 
		while(strcasecmp(exit, "Y") != 0 || strcasecmp(exit, "N") != 0){
		//if yes then break the second loop to continue the first loop
		if(strcasecmp(exit, "Y") == 0){

			break;
		}
		//if n then break which it will
		// first loop and then it will compleletely break
		if(strcasecmp(exit, "N") == 0){
			break;
		
		}
		// if user enter somethin different keep asking
		else {
			printf("\nPlease Try again\nDo another(Y/N)\n");
			for(i = 0; i < 1; i++)
					scanf("%s", exit);
			c = getchar();
		
		}
	}
	//break the loop and terminate the program if user enter "N"
	if(strcasecmp(exit, "N") == 0){
			break;
		
		}
	}
}
