#include <stdio.h>
int main(){
	float soKm, soPhutCho,tongTien;
	printf("Nhap quang duong di xe: ");
	if (scanf("%f", &soKm)!=1 || soKm<=0){
		printf("Nhap sai!");
		return 0;
	}
	printf("Nhap thoi gian cho: ");
	scanf("%f",&soPhutCho);
	if (soPhutCho>=5) //tinh gia tien t5heo thoi gian cho
		tongTien = (soPhutCho-5)*1000;
	else
		tongTien = 0;
	
	if (soKm<=0.5) //tinh gia tien 0-0.5km
		tongTien=tongTien + 12000;
	else if (soKm>30) //tinh gia tien khi >30km
		tongTien=tongTien + 12000 + 15000*29.5 + 12000*(soKm-30);
	else //tinh gia tien 0.6-30km
		tongTien=tongTien + 12000 + 15000*(soKm-0.5);
	printf("%-15s %-15s %-15s \n","So km","So phut cho","Tong tien");
	if (soKm<=0.5)
		printf("%-15.1f %-15.0f %-15.3f",soKm,soPhutCho,tongTien);
	if (soKm>0.5)
		printf("%-15.0f %-15.0f %-15.3f",soKm,soPhutCho,tongTien);
	return 0;
}