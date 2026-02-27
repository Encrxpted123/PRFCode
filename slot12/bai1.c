#include <stdio.h>
#include <stdlib.h>

void divisionsum(int n){ //tong uoc so
	int sum = 0;
	int i;
	for (i=1;i<=n;i++){
		if (n%i==0){
			sum = sum + i;
		}
	}
	printf("tong uoc chung la: %d\n",sum);
}

int main(){
	int sum = 0;
	divisionsum(13);
}
