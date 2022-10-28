//Hàm kiểm tra số chính phương

#include <stdio.h>
#include <math.h>

bool ktSCP(int n){
	int i;
	while(i*i <= n){
        if(i*i == n){
            return true;
        }
        i++;
    }
    return false;
}

int main(){
	int k;
	scanf("%d", &k);
	if (ktSCP(k)){
		printf("%d la so chinh phuong\n", k);
	}
	else{
		printf("%d khong la so chinh phuong\n", k);
	}
}