// Tính trung bình cộng các số lẻ ở vị trí chẵn trong mảng n số

#include <stdio.h>

int timTBC(int arr[], int n){
	float S=0.0, TBC, soLe;
	for (int i=0; i<n; i++){
		if(arr[i]%2!=0){
			if(i%2!=0){
			S += arr[i];
			soLe++;
			}
		}
	}
	TBC=S/soLe;
	return TBC;
}

int main(){
	int ary[7];
	for (int i=0; i<7; i++){
		scanf("%d", &ary[i]);
	}
	float TBC = timTBC(ary,7);
	printf("TBC: %f \n", TBC);
}