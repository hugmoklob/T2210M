//Viết function Tìm số lớn nhất trong 3 số nguyên

#include <stdio.h>
void timMax(int a, int b, int c){
    if(a>b){
		if(a>c){
			printf("%d la max", a);
			}
		else
			printf("%d la max", c);	
		}
	else {
		if (b>c){
			printf("%d la max", b);
		}
		else
			printf("%d la max", c);
	}
}
 
 
int main() {
    int a, b, c;
     
    printf("Nhap vao so thu 1:");
    scanf("%d", &a);
     
    printf("Nhap vao so thu 2:");
    scanf("%d", &b);
     
    printf("Nhap vao so thu 3:");
    scanf("%d", &c);
     
    timMax(a, b, c);
     
}

