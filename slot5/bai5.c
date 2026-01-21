#include <stdio.h>
int main(){
	int N, t;
	printf("Nhap N: ");
	scanf("%d",&N);
	if (N<100)
		t=950*N;
	else if (N>=200)
		t=1550*N;
	else if (N>=150)
		t=1350*N;
	else if (N>=100)
		t=1250*N;
	printf("So tien la: %d",t);
	return 0;
}