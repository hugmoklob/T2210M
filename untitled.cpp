#include <stdio.h>

int smallest_index(int a[], int n){
	int min = a[0];
    for (int i=1; i<n; i++){
        if (min > a[i])
            min = a[i];
    }
    return min;
}

int main(){
	int ary[] = {1,2,4,5,10,100,2,-22};
	int x = smallest_index(ary[1,2,4,5,10,100,2,-22]);
	printf("Return the index of the smallest element: %d \n", x);
}