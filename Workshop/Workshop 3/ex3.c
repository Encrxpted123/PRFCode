#include <stdio.h>

float calculate_salary(float hours, float rate){
	if (hours<=40){
		return rate*hours;
	}
	else{
		return rate*40 + (hours-40)*rate*1.5;
	}
}

int main() {
    float hours, rate, salary;
	printf("Nhap thoi gian: "); //so gio lam viec
	while(scanf("%f",&hours)!=1 || hours<0){
		printf("Nhap thoi gian: ");
		fflush(stdin);
	}
	printf("Nhap don gia: "); //so tien nhan duoc moi gio lam viec
    while(scanf("%f",&rate)!=1 || rate<0){
		printf("Nhap don gia: ");
		fflush(stdin);
	}
    salary = calculate_salary(hours, rate);
    printf("Luong tuan: %.2f\n", salary);
    return 0;
}