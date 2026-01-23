#include <stdio.h>
int main(){
	float km, t,cash;
	printf("Nhap quang duong di xe: ");
	if (scanf("%f", &km)!=1 || km<=0){
		printf("Nhap sai!");
		return 0;
	}
	printf("Nhap thoi gian cho: ");
	scanf("%f",&t);
	if (t>=5) //tinh gia tien t5heo thoi gian cho
		cash = (t-5)*1;
	else
		cash = 0;
	
	if (km<=0.5) //tinh gia tien 0-0.5km
		cash=cash + 12;
	else if (km>30) //tinh gia tien khi >30km
		cash=cash + 12 + 15*29.5 + 12*(km-30);
	else //tinh gia tien 0.6-30km
		cash=cash + 12 + 15*(km-0.5);
	printf("%-15s %-15s %-15s \n","So km","So phut cho","Tong tien");
	if (km<=0.5)
		printf("%-15.1f %-15.0f %-15.3f",km,t,cash);
	if (km>0.5)
		printf("%-15.0f %-15.0f %-15.3f",km,t,cash);
	return 0;
}