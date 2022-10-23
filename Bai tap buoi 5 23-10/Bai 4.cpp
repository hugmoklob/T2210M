// Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n

#include <stdio.h>
int main(){

	int n, x, CS;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}

	while(n!=0){
		int x = n%10;
		CS = x;
		n = n/10;
	}
	printf("Chu so dau tien cua n: %d \n", CS);
}