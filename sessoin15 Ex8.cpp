#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char nocnha[50];
	printf("Moi ban nhap : ");
	fgets(nocnha, 50, stdin);
	for(int i = 0; i < strlen(nocnha); i++){
		nocnha[0] = toupper(nocnha[0]);
		if(nocnha[i] == ' '){
			nocnha[i + 1] = toupper(nocnha[i + 1]);
		}
	}
	printf("\nBan da nhap : ");
	fputs(nocnha, stdout);
	return 0;
}
