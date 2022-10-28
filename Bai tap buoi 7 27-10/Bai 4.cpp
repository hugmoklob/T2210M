//Hàm Tìm ước chung lớn nhất a và b

#include <stdio.h>

int UCLN(int a, int b){
	int i;
	for (i=b; i>0; i--){
		if((a%i==0) && (b%i==0)){
			break;
    	}
	}
	return i;
}

int main(){
	int x,y;
	printf("Nhap vao so nguyen x > 0: ");
	scanf("%d", &x);
	printf("Nhap vao so nguyen y > 0: ");
	scanf("%d", &y);
	int z;
	z = UCLN(x,y);
	printf("Uoc chung lon nhat cua 2 so: %d", z);
}
	