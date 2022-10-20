//Nhập 1 số nguyên n, kiểm tra xem n có phải số hoàn hảo hay không

#include <stdio.h>
int main(){
	int n, i, S=0;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	
	for (i=1; i<=n/2; i++){
		if(n%i==0){
    		S+=i;
    	}
	}
	if(n==S){
		printf("%d la so hoan hao \n", n);
	}
	else{
		printf("%d khong la so hoan hao \n", n);
	}
}