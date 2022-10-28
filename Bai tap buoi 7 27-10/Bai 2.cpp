//Viết function Tính diện tích tam giác

#include <stdio.h>
#include <math.h>

int dientichTamgiac(float a, float b, float c){
	float cv=a+b+c;
	float ncv=cv/2;
	float dt= sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c));
	return dt;
}

int main(){
	float x, y, z;
	scanf("%f%f%f", &x, &y, &z);
	float n = dientichTamgiac(x,y,z);
	printf("Dien tich tam giac %f", n);
}