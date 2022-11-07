#include <stdio.h>

int smallest_index(int a[], int n){
	int min = a[0], index = 0;
    for (int i=1; i<n; i++){
        if (min > a[i])
            min = a[i];
        	index=i;
    }
    return index;
}

int main(){
	int ary[8];
	printf("An array and total elements in the array: \n");
	for (int i=0; i<8; i++){
		scanf("%d", &ary[i]);
	}
	int x = smallest_index(ary,8);
	printf("Return the index of the smallest element: %d \n", x);
}