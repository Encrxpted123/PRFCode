#include <stdio.h>

int main(){
	printf("\nINPUT:\n");
	char n[101];
	fgets(n,101,stdin);
	int count=0;
	while(n[count]!='\0'){
		if (n[count]!='\n'){
			count++;
		}
		else break;
	}
	printf("\nOUTPUT:\n");
	printf("%d",count);
}
