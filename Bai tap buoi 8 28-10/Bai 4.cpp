//Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng

#include <stdio.h>

int timSLCC(int arr[], int n){
	int SLCC;
	for (int i=n-1; i>=0; i--){
		if(arr[i]%2!=0){
			SLCC=arr[i];
			break;
		}
	}
	return SLCC;
}

int main(){
	int ary[5];
	for (int i=0; i<5; i++){
		scanf("%d", &ary[i]);
	}
	int SLCC = timSLCC(ary,5);
	printf("SLCC: %d \n", SLCC);
}