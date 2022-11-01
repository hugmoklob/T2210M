// Dem nguyen am ueoai va ki tu khac trong chuoi

#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	printf("Nhap chuoi: ");
	scanf("%s", s);
	int demNguyenAm = 0, demKiTu = 0;
	for (int i = 0; i<strlen(s); i++){
		if(s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i'){
			demNguyenAm++;
		}
		else {
			demKiTu++;
		}
	}
	printf("So luong nguyen am: %d \n", demNguyenAm);
	printf("So luong ki tu khac: %d \n", demKiTu);
}