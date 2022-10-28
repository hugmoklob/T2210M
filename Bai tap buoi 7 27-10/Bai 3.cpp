//Hàm tính tổng các chữ số của 1 số nguyên n

#include <stdio.h>

int tongChuSo(int n){
	int x, S = 0;
	while(n!=0){
		int x = n%10;
		S +=x;
		n = n/10;
	}
	return S;
}

int main(){
	int k;
	printf("Nhap vao so k>0: ");
	scanf("%d", &k);
	if(k<=0){
		printf("Nhap vao so k>0");
	}
	int z = tongChuSo(k);
	printf("Tong chu so n la: %d", z);
}