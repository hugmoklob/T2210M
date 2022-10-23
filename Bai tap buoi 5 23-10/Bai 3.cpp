//Tỉnh tổng các chữ số của 1 số nguyên n

#include <stdio.h>
int main(){

	int n, x, S = 0;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}

	while(n!=0){
		int x = n%10;
		S +=x;
		n = n/10;
	}
	printf("Tong cac chu so cua n: %d", S);
}