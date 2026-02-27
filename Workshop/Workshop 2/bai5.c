#include <stdio.h>
#include <math.h>

int main(){
	int n,sum;
	printf("Nhap n: ");
	for(;;){
		if(scanf("%d",&n)==1 && n!=0){
		sum = sum + n;
		printf("%d\n",sum);
		printf("Nhap n: ");
		fflush(stdin);
		}
		else break;
	}
	return 0;
}
	