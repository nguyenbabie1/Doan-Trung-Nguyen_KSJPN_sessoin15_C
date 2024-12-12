#include <stdio.h>
#include <string.h>

int main(){
	char nocnha[50];
	char deleteIndex;
	int length;
	printf("Nhap vao chuoi: ");
	fgets(nocnha, 50, stdin);
	printf("Nhap vao ky tu muon xoa: ");
	scanf("%c", &deleteIndex);
	length=strlen(nocnha);
	for (int i=0;i<length;i++){
		if(nocnha[i]==deleteIndex){
			for (int j=i;j<length;j++){
				nocnha[j]=nocnha[j+1];
			}
			i--;
		}
	}
	printf("Chuoi sau khi xoa la: %s", nocnha);
	return 0;
}

