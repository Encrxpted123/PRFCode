#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so thuc: ");
	scanf("%d.%d",&a,&b);
	printf("gia tri nhap: %d.%d\n",a,b);
	printf("phan nguyen la: %d\n", a);
	printf("phan thap phan: 0.%d\n",b);
	return 0;
}