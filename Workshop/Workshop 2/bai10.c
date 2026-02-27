#include <stdio.h>
#include <math.h>

int main(){
	int n, sodu;
	for (sodu=100000000;sodu > 0;){
		printf("Nhap 1 de rut tien, nhap 2 de thoat: ");
		for(;;){
			if(scanf("%d",&n) != 1 || n<1 || n>2){
			printf("Nhap lai: ");
			fflush(stdin);
			}
			else break ;
		}
		if (n==2){
			return 0;
		}
		else{
			printf("Nhap so tien can rut: ");
			for(;;){
				if(scanf("%d",&n) != 1 || n<1 || n>2){
					printf("Nhap lai: ");
					fflush(stdin);
				}
				else break ;
			}
			sodu = sodu - n;
			printf("Rut tien thanh cong! So du con: %d\n",sodu);
		}
	}
}