#include <stdio.h>
int main(){
	float a,b,c;
	float Max = a;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	if (Max<=b)
		Max = b;
	if (Max<=c)
		Max = c;
	printf("Gia tri lon nhat la %.2f",Max);
	return 0;
}