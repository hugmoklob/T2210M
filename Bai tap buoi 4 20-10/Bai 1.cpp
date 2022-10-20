//Nhập 1 số nguyên n, in ra các số lẻ nhỏ hơn n

#include <stdio.h>
int main(){
	int n, i;
	printf("Nhap vao so nguyen n > 0: ");
	scanf("%d", &n);
	if (n<=0){
		printf("Nhap vao so nguyen n > 0: "); 
	}
	printf("Cac so le la: ");
	for (i=1; i<n; i+=2){
		printf("%d ", i);
	}
} 