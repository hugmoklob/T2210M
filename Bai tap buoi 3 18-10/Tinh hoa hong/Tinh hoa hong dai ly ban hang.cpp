#include <stdio.h>

int main(){
	float Doanhso, Hoahong;
	printf("Nhap doanh so: ");
	scanf("%f", &Doanhso);

	if (Doanhso>300){
		Hoahong = Doanhso*0.2;
		printf("Hoahong = %f \n", Hoahong);
	}
	else{
		if (Doanhso<=100){
			Hoahong = Doanhso*0.05;
			printf("Hoahong = %f \n", Hoahong);
			}
		else{
			Hoahong = Doanhso*0.1;
			printf("Hoahong = %f \n", Hoahong);
			}
		}
}