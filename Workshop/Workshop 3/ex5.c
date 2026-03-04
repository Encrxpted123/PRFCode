#include <stdio.h>

int is_prime(int n){
	if(n==2){ //neu n=2 thi n la so nguyen to
		return 1;
	}
	else if (n<2){ //neu n<2 thi khong phai so nguyen to
		return 0;
	}
	else{ //tim so nguyen to khi n>2
		if (n%2==0)
		return 0;
    	for (int i = 3; i * i <= n; i += 2) {
     	   if (n % i == 0)
     	       return 0;
		}
	}
}

int main() {
    int a, b;

    printf("Nhap a: ");
	while(scanf("%d", &a)!=1){
		printf("Nhap a: ");
		fflush(stdin);
	}
    printf("Nhap b: ");
   	while(scanf("%d", &b)!=1){
		printf("Nhap b: ");
		fflush(stdin);
	}

    printf("Cac so nguyen to trong khoang [%d, %d]:\n", a, b);

    for (int i = a; i <= b; i++) {

        // Bo qua so chan
        if (i % 2 == 0 && i != 2)
            continue;

        if (is_prime(i)){
            printf("%d ", i);
  		}
	}

    printf("\n");
    return 0;
}