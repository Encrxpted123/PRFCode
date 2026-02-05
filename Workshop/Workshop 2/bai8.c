#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,temp;
    
    printf("Nhap a: ");
	while (scanf("%d", &a) != 1){
		printf("Nhap a: ");
		fflush(stdin);
	}
	
	printf("Nhap b: ");
	while (scanf("%d", &b) != 1){
		printf("Nhap b: ");
		fflush(stdin);
	}
	
	if (a<b){ //dao vi tri a & b
		temp = a;
		a = b;
		b = temp;
	}
	
	while (b!=0){ //Euclid
		c = a%b;
		a=b;
		b=c;
	}
	printf("%d",a);
}