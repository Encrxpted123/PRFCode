#include <stdio.h>
#include <math.h>

int main() {
    int n,i = 0;
    printf("Nhap n: ");

	while (scanf("%d", &n) != 1){
		printf("Nhap n: ");
		fflush(stdin);
	}
	
	if (n<0){
		printf("%d khong phai so chinh phuong",n);
	}
	else if(n==i*i){
		printf("%d la so chinh phuong");
	}
	else{
		while(n!=i*i && n>i*i){
			i++;
		}
		if(i*i>n){
			printf("%d khong phai so chinh phuong",n);
		}
		else{
			printf("%d la so chinh phuong",n);
		}
	}
}