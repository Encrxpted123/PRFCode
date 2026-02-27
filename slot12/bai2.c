#include <stdio.h>
#include <stdlib.h>

void highnum(int a, int b, int c){ //tim so lon nhat trong 3 so
	if (a>=b){
		if (a<c){
			printf("So lon nhat la: %d",c);
		}
		else{
			printf("So lon nhat la: %d",a);
		}
	}
	else if (a>=c){
		printf("So lon nhat la: %d",b);
	}
	else{
		if(b>c){
			printf("So lon nhat la: %d",b);
		}
		else{
			printf("So lon nhat la: %d",c);
		}
	}
}

int main(){
	int a = 3, b = 3, c = 4;
	highnum(a,b,c);
}
