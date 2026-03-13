#include <stdio.h>
#include <string.h>

void reverseInt(int *a, int *b, int *c){
	int temp = *a;
	*a = *c;
	*c = temp;
	temp = *b;
	*b = *c;
	*c = temp;
	printf("%d %d %d",*a,*b,*c);
}

int main(){
	int	a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	reverseInt(&a,&b,&c);
    return 0;
}