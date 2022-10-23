//Nhập 2 số a,b. Tìm ước chung lớn nhất và bội chung nhỏ nhất của a và b

#include <stdio.h>
int main(){
	int a, b, c, i, n;
	printf("Nhap vao so nguyen a > 0: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b > 0: ");
	scanf("%d", &b);
	while(a <= 0 && printf("\nLoi: a > 0 !")){
		break;
	}
	while(b <= 0 && printf("\nLoi: b > 0 !")){
		break;
	}

	if (b>a){
		c=b;
		b=a;
		a=c;
	}

	for (i=b; i>0; i--){
		if((a%i==0) && (b%i==0)){
    		printf("%d la uoc chung lon nhat cua a va b\n", i);
    		break;
    	}
	}

	for (n=a; n>=0; n++){
		if((n%a==0) && (n%b==0)){
    		printf("%d la boi chung nho nhat cua a va b", n);
    		break;
    	}
	}	
}