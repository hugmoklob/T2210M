//Nhập vào 1 mảng n số nguyên, tìm số lượng số dương liên tiếp nhiều nhất

#include <stdio.h>

int SDLT(int arr[], int n){
	int SDLT=0, max=0;
	for (int i=0; i<n; i++){
		if(arr[i]>0){
			SDLT++;
			if(SDLT>max){
				max=SDLT;
			}
		}
		else{
			SDLT=0; 
		}
	}
	return max;
}

int main(){
	int ary[10];
	for (int i=0; i<10; i++){
		scanf("%d", &ary[i]);
	}
	int x = SDLT(ary,10);
	printf("SDLTNN: %d \n", x);
}