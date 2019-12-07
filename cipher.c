#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10

extern char cipher(char c, int direcion, int shift);


int main(){
	int c;
	int direcion = 1;
	int shift,i;
	char str[N];
	char exit[N];
	char fun[N];
   	int size = 0;

	while(strcasecmp(exit, "N") != 0) {
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
			while(direcion != 1 || direcion != 2){
				if(direcion == 1){
					
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
					}
				if(direcion == 2){
						printf("shift: ");
						scanf("%d", &shift);
			
						for(i = 0; i < size; i++)
							fun[i] = cipher(fun[i], direcion, shift);
						for(i = 0; i < size; i++)	
							printf("%c", fun[i]);
					break;
					}
					
				else{
					
						printf("Please Enter a valid input\n");
						printf("(1) Encrypt (2) Decrypt: \n");
						scanf("%d", &direcion);
					
			}
				
			
		}
		
		printf("\nDo another(Y/N)\n");
		for(i = 0; i < 1; i++)
			scanf("%s", exit);
		c = getchar();
		if(strcasecmp(exit, "Y") == 0){
			continue;
		}
		
		else if(strcasecmp(exit, "N") == 0){
			break;
		
		}
		else {
			printf("\nPlease Try again\nDo another(Y/N)\n");
			for(i = 0; i < 1; i++)
					scanf("%s", exit);
			c = getchar();
		
		}
	}
}
	 
	 



