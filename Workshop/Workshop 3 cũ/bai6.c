#include <stdio.h>
#include <math.h>

int main() {
    int n,i = 1,kq = 0;
    printf("Nhap n: ");

	while (scanf("%d", &n) != 1 || n<0){
		printf("Nhap n: ");
		fflush(stdin);
	}
	
	if (n==0){
		kq = 0;
	}
	
	while (n>0){
		kq = kq + n%2*i; //lay chu cai theo so du
		n = n/2;
		i = i * 10; //thay doi vi tri dien so du
	}
	printf("%03d",kq);
}
		