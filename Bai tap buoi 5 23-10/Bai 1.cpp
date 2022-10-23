//Nhập 1 số n, tìm các ước và tính tổng ước của n

#include <stdio.h>
int main(){
	int n, i, S=0;
	printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}
	
	for (i=1; i<=n; i++){
		if(n%i==0){
    		S+=i;
    	}
	}
	printf("%d la tong uoc cua n \n", S);
}