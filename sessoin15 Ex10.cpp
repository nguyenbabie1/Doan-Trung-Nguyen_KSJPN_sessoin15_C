#include <stdio.h>
#include <string.h>

int main(){
	char string[50];
	char Index;
	int count;
	printf("Nhap chuoi: ");
	fgets(string, 50, stdin);
	for (int i=0; i<strlen(string)-1; i++){
		if(string[i]==' '){
			continue;
		}
		count=1;
		Index=string[i];
		for (int j=i+1; j< strlen(string); j++){
			if (string[i]==string[j]){
				for (int k=j;k<strlen(string);k++){
					string[k]=string[k+1];
				}
				count++;
			}
		}
		printf("%c = %d\n", Index, count);
	}
	return 0;
}
 
