//Viết function Tìm số đảo ngược của số nguyên

#include <stdio.h>

int daoNguoc(int n){
	int sd, x=0;
	
	while(n!=0){
		int sd = n%10;
		x = x*10+sd;
		n = n/10;
	}
	return x;
}
	
int main(){
	int k;
	printf("Nhap vao so k>0: ");
	scanf("%d", &k);
	if(k<=0){
		printf("Nhap vao so k>0 !");
	}
	else{
		int z = daoNguoc(k);
		printf("Dao nguoc: %d", z);
	}
}

