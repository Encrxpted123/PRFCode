#include <stdio.h>
#include <math.h>

int main(){
	int n, sodu = 100000000;
	while (sodu > 0){
		printf("Nhap 1 de rut tien, nhap 2 de thoat: ");
		while(scanf("%d",&n) != 1 || n<1 || n>2){
			printf("Nhap lai: ");
			while (getchar() != '\n');
		}
		if (n==2){
			return 0;
		}
		else{
			printf("Nhap so tien can rut: ");
			scanf("%d",&n);
			sodu = sodu - n;
			printf("Rut tien thanh cong! So du con: %d\n",sodu);
		}
	}
}