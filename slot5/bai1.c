#include <stdio.h>
int main(){
	int x,a;
	printf("Nhap x: ");
	scanf("%d", &x);
	a = x;
	if (x<0){
		x = -x;
	}
	printf("|%d| = %d",a,x);
	return 0;
}