#include <stdio.h>
 
 int main(){
 	int n, i, SCT = 0;
 	printf("Nhap so nguyen n: ");
 	scanf("%d", &n);

 	while (i<n){
 		if (i%2==1){
 			printf("So le = %d \n", i);
 		}
 		i++;
 	}
 }