#include <stdio.h>
int main(){
	float cc,gk,ck,tong;
	char chu;
	printf("Nhap diem chuyen can: ");
	scanf("%f",&cc);
	printf("Nhap diem giua ki: ");
	scanf("%f",&gk);
	printf("Nhap diem cuoi ki: ");
	scanf("%f",&ck);
	tong = cc*0.1 + gk*0.3 + ck*0.6;
	if (tong>=8.5)
		chu = 'A';
	else if (tong>=7)
		chu = 'B';
	else if (tong>=5.5)
		chu = 'C';
	else if (tong>=4)
		chu = 'D';
	else
		chu = 'F';
	if (cc>=4 && gk>=4 && ck>=4 && chu!="F")
		printf("Dat!");
	else
		printf("Khong dat!");
		
	
}