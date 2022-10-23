//Nhập 1 số nguyên n, tìm số đảo ngược của n

#include <stdio.h>
int main(){

	int n, sd, x=0;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}

	while(n!=0){
		int sd = n%10;
		x = x*10+sd;
		n = n/10;
	}
	printf("Dao nguoc: %d", x);
}