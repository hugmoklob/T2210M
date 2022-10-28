//Tính trung bình cộng các số lẻ trong mảng n số

#include <stdio.h>

int timTBC(int arr[], int n){
	float S=0.0, TBC, soLe;
	for (int i=0; i<n; i++){
		if(arr[i]%2!=0){
		S += arr[i];
		soLe++;
		}
	}
	TBC=S/soLe;
	return TBC;
}

int main(){
	int ary[5];
	for (int i=0; i<5; i++){
		scanf("%d", &ary[i]);
	}
	float TBC = timTBC(ary,5);
	printf("TBC: %f \n", TBC);
}