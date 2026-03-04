#include <stdio.h>
#include <stdlib.h>
int day;
int is_leap_year(int year){
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		day = 29;
	}
	else{
		day = 28;
	}
}
int get_days_in_months(int month, int year){
	switch(month){
		case 1: case 3: case 5: case 7: case 9: case 11:
			day = 31;
			printf("thang %d nam %d co %d ngay.",month,year,day);
			break;
		case 4: case 6: case 8: case 10: case 12:
			day = 30;
			printf("thang %d nam %d co %d ngay.",month,year,day);
			break;
		case 2:
			is_leap_year(year);
			printf("thang %d nam %d co %d ngay.",month,year,day);
			break;
		default:{
			printf("Khong hop le!");
			return 0;
		}
	}
}

int main(){
	int year, month;
	printf("Nhap thang: ");
	while (scanf("%d",&month)!=1 || month>12 || month <1){
		printf("Nhap thang: ");
		fflush(stdin);
	}
	printf("Nhap nam: ");
	while (scanf("%d",&year)!=1 || year<1){
		printf("Nhap nam: ");
		fflush(stdin);
	}
	get_days_in_months(month,year);
}