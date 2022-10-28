//Viết function Tính chu vi tam giác

#include <stdio.h>

int chuviTamgiac(float a, float b, float c){
	float d=a+b+c;
	return d;
}

int main(){
	float x, y, z;
	scanf("%f%f%f", &x, &y, &z);
	float n = chuviTamgiac(x,y,z);
	printf("Chu vi tam giac %f", n);
}