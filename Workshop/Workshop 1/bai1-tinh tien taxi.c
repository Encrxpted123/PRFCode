#include <stdio.h>
int main(){
	float km, t,cash;
	printf("Nhap quang duong di xe (km): ");
	scanf("%f",&km);
	printf("Nhap thoi gian cho: ");
	scanf("%f",&t);
	if (t>=5) //tinh gia tien theo thoi gian cho
		cash = (t-5)*1000;
	else
		cash = 0;
	
	if (km<=0.5) //tinh gia tien 0-0.5km
		cash=cash + 12000;
	else if (km>30) //tinh gia tien khi >30km
		cash=cash + 12000 + 441000 + 12000*(km-30);
	else //tinh gia tien 0.6-30km
		cash=cash + 12000 + 15000*(km-0.5);
	printf("So tien la: %.0f dong",cash);
	return 0;
}