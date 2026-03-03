#include <stdio.h>
#include <math.h>

int main(){
	float n;
	for(;;){
		printf("Nhap n: ");
		for(;;){
			if(scanf("%f",&n)!=1 || n>1000){
				printf("Nhap lai n: ");
				fflush(stdin);
			}
			else break;
		}
		
		if (n>=0){
			printf("Can bac 2 la: %f\n",sqrt(n));
		}
		else{ //huy vong lap neu n<0
			break;
		}
	}
	return 0;
}