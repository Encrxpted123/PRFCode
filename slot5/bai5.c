#include <stdio.h>
int main(){
	int N, T;
	printf("Nhap N: ");
	scanf("%d",&N);
	if (N<100)
		T=950*N;
	else if (N>=200)
		T=1550*N;
	else if (N>=150)
		T=1350*N;
	else if (N>=100)
		T=1250*N;
	printf("So tien la: %d",T);
	return 0;
}