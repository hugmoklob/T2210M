#include <stdio.h>

int main(){
	float a;
	printf("Nhap diem trung binh: ");
	scanf("%f", &a);


	if(a>=9){
		printf("Hang A");
	}
	if((a>=7) && (a<9)){
		printf("Hang B");
	}
	if((a>=5) && (a<7)){
		printf("Hang C");
	}
	if(a<5){
		printf("Hang F");
	}
		
}