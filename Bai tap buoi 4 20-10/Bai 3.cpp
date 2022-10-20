//Nhập 1 số nguyên n, kiểm tra xem n có phải số nguyên tố hay không

#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap vao so nguyen n > 2: ");
	scanf("%d", &n); 
	if(n<2){
		printf("%d khong phai la so nguyen to", n);
	}
	if(n==2){
		printf("%d la so nguyen to", n);
	}
	else{
		for (i=2; i<n; i++){
			if (n%i==0){
				printf("%d khong la so nguyen to \n", n);
				break;
			} else{
				printf("%d la so nguyen to \n", n);
				break;
			}
		}
	}
}
	