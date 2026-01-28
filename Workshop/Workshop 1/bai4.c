#include <stdio.h>
int main(){
	int N, t;
	printf("Nhap N: ");
	scanf("%d",&N);
	if (N<100)
		t=N*950;
	else if (N>=200)
		t=950*100 + 1250 * 50 + 1350 * 50 + (N-200)*1550;
	else if (N>=150)
		t=950*100 + 1250 * 50 + 1350*(N-150);
	else if (N>=100)
		t=950*100 + 1250 * (N-100);
	printf("So tien la: %d",t);
	return 0;
}