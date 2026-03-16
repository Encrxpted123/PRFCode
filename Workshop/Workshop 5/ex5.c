#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	char n[101],a,b;
	fgets(n,101,stdin);
	scanf(" %c",&a);
	scanf(" %c",&b);
	int count=strlen(n);
	int counter=0;
	for(int i=0;i<count;i++){
		if(n[i]==a){
			n[i]=b;
			counter+=1;
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d\n",counter);
	printf("%s",n);
}

