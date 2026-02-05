#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,i;
    srand(time(NULL));
    n = rand() % 10 + 1;
    printf("Nhap so tu 1-10: ");
    while (scanf("%d", &i) != 1 || i != n){
    	if (n > i){
    		printf("Lon hon! Nhap lai: ");
		}
		else{
			printf("Nho hon! Nhap lai: ");
		}
		while (getchar() != '\n');
	}
	printf("Chuc mung! Ban da doan dung");
}