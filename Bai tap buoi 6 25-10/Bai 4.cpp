//Viết function Tìm tổng S = 1+2+3+...n.

#include <stdio.h>

int timTong(int k){
	int i, S=0;
	for (i=1; i<=k;i++){
		S+=i;
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
		int z = timTong(n);
		printf("Tong: %d", z);
	}
}

