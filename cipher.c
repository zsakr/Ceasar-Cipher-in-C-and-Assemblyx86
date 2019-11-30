#include <stdio.h>
#include <string.h>
#define N 1000
extern int cipher( int n);

int main(){

	int option;
	int shift,i;
	char str[N];
	char exit[N];

	printf("Enter a word: ");
	for(i = 0; str[i] != '\n'; i++)
		scanf("%s", str);

	while(1){
		printf("(1) Encrypt (2) Decrypt: \n");
		scanf("%d", &option);
		printf("shift: ");
		scanf("%d", &shift);
		printf("Do another(Y/N)\n");
		scanf("%s", exit);

			 if(strcpy(exit,"Y") == 0){
				continue;
			}
			else if(strcpy(exit,"N") == 0){
				break;
			}

	}
printf("%d: ", cipher(shift));


}
