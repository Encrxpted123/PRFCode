#include <stdio.h>
#include <math.h>

int main() {
    int n,i = 1,kq = 0;
    printf("Nhap n: ");

	for (;;){
		if(scanf("%d", &n) != 1 || n<0){
			printf("Nhap n: ");
			fflush(stdin);
		}
		else break;
	}
	
	if (n==0){
		kq = 0;
	}
	
	for(;;){
		if(n>0){
			kq = kq + n%2*i;
			n = n/2;
			i = i * 10;
		}
		else break;
	}
	printf("%04d",kq);
}
