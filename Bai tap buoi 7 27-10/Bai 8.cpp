/* Kiểm tra các chữ số của số nguyên dương n 
có giảm dần từ trái sang phải hay không */

#include <stdio.h>

bool ktCS(int n){
	int donvi;
	while (n>=10){
        int donvi=n%10;
        n=n/10;
        if(donvi>n%10)
        {
            return false;
        }
	}
return true;
}

int main(){
	int k;
	printf("Nhap k: ")
;	scanf("%d", &k);
	if (ktCS(k)){
		printf("%d co chu so giam dan tu trai qua phai\n", k);
	}
	else{
		printf("%d co chu so khong giam dan tu trai qua phai\n", k);
	}
}