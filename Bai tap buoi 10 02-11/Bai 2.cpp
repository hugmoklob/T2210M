//Nhập 1 mảng n số nguyên, tìm tổng các số dương liên tiếp lớn nhất

#include <stdio.h>

int S(int arr[], int n){
	int S=0, max=0;
	for (int i=0; i<n; i++){
		if(arr[i]>0){
			S+=arr[i];
			if(S>max){
				max=S;
			}
		}
		else{
			S=0; 
		}
	}
	return max;
}

int main(){
	int ary[10];
	for (int i=0; i<10; i++){
		scanf("%d", &ary[i]);
	}
	int x = S(ary,10);
	printf("TSDLTLN: %d \n", x);
}