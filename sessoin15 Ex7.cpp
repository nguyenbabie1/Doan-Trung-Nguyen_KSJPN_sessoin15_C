#include <stdio.h>

int main() {
    char nocnha[100];
    int demchucai = 0;
    int kitudacbiet = 0;
    int demso = 0;
    
    printf("Nhap chuoi ky tu bat ky:");
    fgets(nocnha, sizeof(nocnha), stdin); 
    for (int i = 0; nocnha[i] != '\0'; i++) {
        if ((nocnha[i] >= 'A' && nocnha[i] <= 'Z') || (nocnha[i] >= 'a' && nocnha[i] <= 'z')) {
            demchucai++;  
        } else if (nocnha[i] >= '0' && nocnha[i] <= '9') {
            demso++;
        } else if (nocnha[i] != '\n') {  
            kitudacbiet++;
 		}
 }
    printf("So ky tu la chu cai trong chuoi: %d\n", demchucai);
    printf("So ky tu la so trong chuoi: %d\n", demso);
    printf("So ky tu dac biet la: %d\n",kitudacbiet);
    return 0;
}

