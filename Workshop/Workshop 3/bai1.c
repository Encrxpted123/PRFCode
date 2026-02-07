#include <stdio.h>
#include <math.h>

int main(){
	float n;
	printf("Nhap n: ");
	for(;;){
		if(scanf("%f",&n)!=1 || n <= 0 || n>1000){
			printf("Nhap lai n: ");
		}
		else{
			printf("%.2f",sqrt(n));
			printf("\nNhap n: ");
		}
	}
	printf("%.2f",sqrt(n));
}