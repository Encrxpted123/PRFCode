#include <stdio.h>
int main(){
	//khai báo số thực a,b, tạo giá trị
	float a,b,c;
	a=5;
	b=10.216;
	c=a+b;
	printf("a: %.0f\n",a);
	printf("b: %.3f\n",b);
	printf("%.0f",a);
	printf(" + %.3f",b);
	printf(" = %.2f",c);
	return 0;
}