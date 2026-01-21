#include <stdio.h>
int main(){
	float x,a;
	printf("Nhap x: ");
	scanf("%f", &x);
	if (x<0)
		a = -x;
	printf("can bac 2 cua |%f| la %.2f",x,sqrt(a));
	return 0;
}