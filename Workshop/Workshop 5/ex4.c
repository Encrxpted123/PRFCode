#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	char n[101];
	fgets(n,101,stdin);
	int count=0,textCount=0;
	while(n[count]!='\0'){
		if (n[count]!='\n'){
			if(n[count+1]=='\n' || n[count+1]=='\0' || n[count+1]==' '){
				textCount+=1;
			}
		}
		count++;
	}
	printf("\nOUTPUT:\n");
	printf("%d",textCount);
}

