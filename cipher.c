#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10

extern char cipher(char c, int direcion, int shift);


int main(){
	int c;
	int direcion = 0;
	int shift,i;
	char str[N];
	char exit[N];
	char fun[N];
   	int size = 0;

	while(strcasecmp(exit, "N") != 0) {
		if(strcasecmp(exit, "N") == 0)
			break;
		else {
		i = 0;
		size = 0;
		printf("Enter a word: \n");
		while((c = getchar()) != '\n'){
			fun[i] = tolower(c);
			i++;
			size++;
		}
			printf("(1) Encrypt (2) Decrypt: \n");
			scanf("%d", &direcion);
			
			switch(direcion){
				case 1:
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
				case 2:
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
				default:
					
						printf("Please Enter a valid input\n");
						printf("(1) Encrypt (2) Decrypt: \n");
						scanf("%d", &direcion);
				}
				
			
		}
		

		printf("\nDo another(Y/N)\n");
		for(i = 0; i < 1; i++)
			scanf("%s", exit);
		c = getchar();
		
		 if(strcasecmp(exit, "N") == 0)
			break;
		}
		
		}

	 



