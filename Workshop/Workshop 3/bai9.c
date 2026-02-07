#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,i;
    srand(time(NULL));
    n = rand() % 10 + 1;
    printf("Nhap so tu 1-10: ");
    while (1){
    	if (scanf("%d", &i) != 1 || i<1 || i>10){
    		printf("Sai roi! Nhap lai: ");
		}
    	else if (n > i){
    		printf("Lon hon! Nhap lai: ");
		}
		else if (n < i){
			printf("Nho hon! Nhap lai: ");
		}
		else break;
		while (getchar() != '\n');
	}
	printf("Chuc mung! Ban da doan dung");
}