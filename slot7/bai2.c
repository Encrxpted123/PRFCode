#include <stdio.h>

int main(){
	int a,b;
	char pt; 
	if (scanf("%d",&a) != 1){
		printf("Nhap sai!");
		return 0;
	}
	if (scanf("%d",&b) != 1){
		printf("Nhap sai!");
		return 0;
	}
	scanf(" %c",&pt);
	if (pt != '+' && pt != '-' && pt != '*' && pt != '/' && pt != '%'){
		printf("Nhap sai!");
		return 0;
	}
	switch(pt){
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
			if (b == 0){
				printf("Khong the chia cho 0");
				return 0;
			}
			else{
				printf("%d / %d = %.2f",a,b,(float)a/b);
				break;
			}
		case '%':
			printf("%d %% %d = %d",a,b,a%b);
			break;
	}
}