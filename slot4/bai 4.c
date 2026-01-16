#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a,b: ");
	scanf("%d,%d",&a,&b);
	char pt;
	printf("Nhap phep toan: ");
	scanf(" %1c",&pt);
	if (pt == '/'){
		if (b!=0){
			printf("%d %c %d = %f", a,pt,b,(float)a/b);
		}
		else
			printf("khong the chia cho 0!");
	}
	else if (pt== '+')
		printf("%d %c %d = %d",a,pt,b,a+b);
		else if (pt== '-')
		printf("%d %c %d = %d",a,pt,b,a-b);
	else if (pt== "*")
		printf("%d %c %d = %d",a,pt,b,a+b);
	else
		printf('Sai phep toan!');
	return 0;
}