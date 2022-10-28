//Hàm Tìm bội chung nhỏ nhất a và b

#include <stdio.h>

int BCNN(int a, int b){
	int i;
	for (i=b; i>0; i++){
		if((i%a==0) && (i%b==0)){
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
	z = BCNN(x,y);
	printf("Boi chung nho nhat cua 2 so: %d", z);
}
	