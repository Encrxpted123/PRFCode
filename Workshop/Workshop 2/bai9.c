#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,i;
    srand(time(NULL));
    n = rand() % 10 + 1;
    printf("Nhap so tu 1-10: ");
    for(;;){
		if(scanf("%d", &i) != 1 || i<1 || i>10){
			printf("Nhap so tu 1-10: ");
			while (getchar() != '\n');
		}
		else if(i!=n){
  	 	 	if (n > i){
    			printf("Lon hon! Nhap lai: ");
				while (getchar() != '\n');
			}
			else if (n < i){
				printf("Nho hon! Nhap lai: ");
				while (getchar() != '\n');
			}
		}
		else break;
	}
	printf("Chuc mung! Ban da doan dung");
}