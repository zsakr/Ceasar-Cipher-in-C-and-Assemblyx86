#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 20
extern char cipher(char c, int direcion, int shift);


int main(){
	char c;
	int direcion;
	int shift,i;
	char str[N];
	char exit[N];
	
	char fun[N];



	while(1){
		i = 0;
		printf("Enter a word: ");
		while((c = getchar()) != '\n'){
			fun[i] = tolower(c);
			i++;
		}
		printf("(1) Encrypt (2) Decrypt: \n");
		scanf("%d", &direcion);
		printf("shift: ");
		scanf("%d", &shift);
		
		for(i = 0; i < N; i++)
			fun[i] = cipher(fun[i], direcion, shift);
		for(i = 0; i < N; i++)	
			printf("%c", fun[i]);
			
		printf("\nDo another(Y/N)\n");
		scanf("%s", exit);

			 if(strcmp(exit,"Y") == 0){
				continue;
			}
			else if(strcmp(exit,"N") == 0){
				break;
			}

	}


}



