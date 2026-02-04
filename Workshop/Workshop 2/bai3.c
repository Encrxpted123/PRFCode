#include <stdio.h>
#include <math.h>

int main(){
	int n,i;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1 || n<1 || n>10){
		printf("Nhap lai n: ");
		fflush(stdin);
	}
	for (i=1;i<=10;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
	