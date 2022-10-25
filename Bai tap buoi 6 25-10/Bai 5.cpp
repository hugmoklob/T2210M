//Viết function Tìm tổng S = 1+1/2+1/3+...1/n.

#include <stdio.h>

float timTong(int k){
	int i;
	float S=0;
	for (i=1; i<=k; i++){
		S += 1.0/i;
	}
	return S;
}
	
int main(){
	int n;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0 !");
	}
	else{
		float z = timTong(n);
		printf("Tong: %f", z);
	}
}

