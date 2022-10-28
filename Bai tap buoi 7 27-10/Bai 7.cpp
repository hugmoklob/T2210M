//Hàm Tìm n nhỏ nhât 1+2+.. +n >10000

#include <stdio.h>

int timN(int a){
	int k=0, S=0;
	while(S<10000){
		k++;
		S+=k;
	}
	return k;
}

int main(){
	int z,n;
	z = timN(n);
	printf("n nho nhat: %d", z);
}
	