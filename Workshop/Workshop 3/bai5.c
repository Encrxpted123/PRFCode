#include <stdio.h>
#include <math.h>

int main(){
	int n,sum;
	printf("Nhap n: ");
	while(1){
		if (scanf("%d",&n)==1 && n!=0){
			sum = sum + n;
			printf("%d\n",sum);
			printf("Nhap n: ");
			while (getchar()!='n');
		}
		else if (n==0){
			break;
		}
		else{
			printf("Nhap n: ");
			fflush(stdin);
		}
	}
	return 0;
}
	