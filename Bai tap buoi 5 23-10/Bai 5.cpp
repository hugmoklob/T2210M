//Tìm chữ số lớn nhất của số nguyên dương n

#include <stdio.h>
int main(){

	int n, x, max = 0;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}

	while(n!=0){
		int x = n%10;
		if(x>max){
		max = x;
		}
		n = n/10;
	}
	printf("Chu so lon nhat cua n: %d \n", max);
}