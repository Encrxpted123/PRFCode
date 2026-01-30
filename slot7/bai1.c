#include <stdio.h>

int main(){
	int thang,quy;
	printf("Nhap vao thang: ");
	if (scanf("%d",&thang)!=1){
		printf("Nhap sai!");
		return 0;
	}
	
	switch(thang){
		case 1:
		case 2:
		case 3:
			quy = 1;
			printf("Quy %d",quy);
			break;
		case 4:
		case 5:
		case 6:
			quy = 2;
			printf("Quy %d",quy);
			break;
		case 7:
		case 8:
		case 9:
			quy = 3;
			printf("Quy %d",quy);
			break;
		case 10:
		case 11:
		case 12:
			quy = 4;
			printf("Quy %d",quy);
			break;
		default:
			printf("Nhap sai!");
			break;
	}
}