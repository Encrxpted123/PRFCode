#include <stdio.h>
#include <math.h>

int main(){
	int n,i,j;
	printf("Nhap n: "); //nhap n
	for(;;){
		if(scanf("%d",&n)!=1 || n<1 || n>10){
			printf("Nhap lai n: ");
			fflush(stdin);
			}
		else{
			for(j=1;j<=n;j++){ //vong lap so tu 1 - n
					printf("%d ",j);
			}
			for(i=1;i<=10;i++){ //vong lap tao bang cuu chuong n * i = ...
				printf("\n%d * %d = %d",n,i,n*i);
			}
		}
	}
}