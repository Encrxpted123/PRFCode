#include <stdio.h>
#include <math.h>

int main(){
	float n;
	int count =0;
	printf("Nhap n: ");
	for(;;){
		if(scanf("%f",&n)!=1 || n <= 0 || n>1000){
			printf("Nhap lai n: ");
			fflush(stdin);
		}
		else{
			if(count==5){
				break;
			}
			else{
			count = count + 1;
			printf("Can bac 2 la: %.2f\n",sqrt(n));
			printf("Nhap n: ");
			}
		}
	}
	printf("Da xong, xuat sac");
}