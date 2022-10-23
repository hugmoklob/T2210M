//Nhập 1 số nguyên dương n
//tìm số ở vị trí thứ n của dãy số Fibonaci 
//với F0 = 0, F1 = 1, F2=1, F3=2, F4=3 

#include <stdio.h>
int main(){
	int n;
    printf("Nhap vao so n>0: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Nhap vao so n>0");
	}
    int f,f1,f2;
    f=f1=f2=1;
    for(int i=3;i<=n;i++){
    	f=f1+f2;
    	f1=f2;
    	f2=f;
    }
     printf("So o vi tri %d = %d",n,f);
}