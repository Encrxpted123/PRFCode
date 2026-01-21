#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	float Max = a;
	if (a>=b , a>=c)
		Max = a;
	else if (b>a,b<=c)
		Max=c;
	else if (b>a,b>=c)
		Max=b;
	printf("So lon nhat la: %.2f ",Max);
	return 0;
}