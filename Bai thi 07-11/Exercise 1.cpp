#include <stdio.h>

int main(){
	int arr[10], k=1;
	printf("Enter 10 integers: \n");
    for(int i=0; i<10; i++){
    	printf("a[%d]: ", k);
		scanf("%d", &arr[i]);
		k++;
    }
    printf("Display in reversed order: \n");
    for (int j=9; j>=0; j--){
    	printf("%d \n", arr[j]);
    }
}