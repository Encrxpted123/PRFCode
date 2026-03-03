#include <stdio.h>

float calculate_taxi_fare(float distance){
    if (distance <= 1)
        return 15000;
    else if (distance > 1 && distance <= 31)
        return 15000 + (distance - 1) * 12000;
    else
        return 15000 + 360000 + (distance - 31) * 10000;
}

int main(){
	float distance,fare;
	printf("Nhap quang duong: ");
	while(scanf("%f",&distance)!=1 || distance<=0){
		printf("Nhap quang duong: ");
		fflush(stdin);
	}
	fare = calculate_taxi_fare(distance);
	printf("Gia tien la %.0f",fare);
}


