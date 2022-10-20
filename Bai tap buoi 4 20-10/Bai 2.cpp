//Nhập 1 số nguyên n, tìm số lớn nhất nhỏ hơn n và chia hết cho cả 2 và 3

#include <stdio.h>
int main(){
	int n, i;
	printf("Nhap vao so nguyen n > 0: ");
	scanf("%d", &n);
	if (n<=0){
		printf("Nhap vao so nguyen n > 0: "); 
	}
	printf("So lon nhat <n chia het cho 2 va 3: ");
	for (i=n; i>=0; i--){
		if((i%2==0) && (i%3==0)){
    		printf("%d ", i);
    		break;
    	}
	}
}