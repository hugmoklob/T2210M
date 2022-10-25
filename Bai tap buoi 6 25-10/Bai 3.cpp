// Viết function tìm số n trong dãy Fibonacci

#include <stdio.h>

int timSoFibonacci(int n){
	if(n<=0){
		printf("Nhap vao so n>0");
	}
    int f,f1,f2;
    f=f1=f2=1;
    for(int i=3;i<=n;i++){
    	f=f1+f2;
    	f1=f2;
    	f2=f;
    }
    return f;
}

int main(){
	int k;
	printf ("Nhap vao so k > 0: ");
	scanf("%d", &k);
	int z = timSoFibonacci(k);
     printf("So o vi tri %d = %d", k, z);
}