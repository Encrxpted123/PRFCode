#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	char n[101];
	fgets(n,101,stdin);
	int count = strlen(n);
	printf("\nOUTPUT:\n");
	for(int i=count;i>=0;i--){
		printf("%c",n[i]);
	}
}

