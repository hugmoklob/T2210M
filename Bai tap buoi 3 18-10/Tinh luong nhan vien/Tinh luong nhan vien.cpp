#include <stdio.h>

int main(){
	float Luong, Luongrong, Thuethunhap;
	printf("Nhap luong: ");
	scanf("%f", &Luong);


	if (Luong>15){
		Thuethunhap = Luong*0.3;
		printf("Thuethunhap = %f \n", Thuethunhap);
		Luongrong = Luong*0.7;
		printf("Luongrong = %f \n", Luongrong);
	}
	else{
		if (Luong<=7){
			Thuethunhap = Luong*0.1;
			printf("Thuethunhap = %f \n", Thuethunhap);
			Luongrong = Luong*0.9;
			printf("Luongrong = %f \n", Luongrong);
			}
		else{
			Thuethunhap = Luong*0.2;
			printf("Thuethunhap = %f \n", Thuethunhap);
			Luongrong = Luong*0.8;
			printf("Luongrong = %f \n", Luongrong);
			}
		}
}