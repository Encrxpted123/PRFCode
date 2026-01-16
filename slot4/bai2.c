#include <stdio.h>
int main (){
	int ngay,thang,nam;
	printf("Nhap ngay/thang/nam: ");
	scanf("%2d/%2d/%4d",&ngay,&thang,&nam);
	printf("%02d / %02d / %04d",ngay,thang,nam);
	return 0;
}