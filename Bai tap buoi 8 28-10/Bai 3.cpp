// Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không

#include <stdio.h>

int main(){
	int ary[5];
	for(int i=0;i<5;i++){
		scanf("%d", &ary[i]);
	}
	int x, dem=0;
	printf("Nhap X: ");
	scanf("%d", &x);
	for (int i=0;i<=5;i++){
		if(x==ary[i]){
			printf("X thuoc mang");
			dem++;
			break;
		}
	}
	if (dem==0){
		printf("X khong thuoc mang");
	}
}