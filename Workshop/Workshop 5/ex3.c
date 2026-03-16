#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	char n[101];
	fgets(n,101,stdin);
	int count=strlen(n);
    if(n[count-1]=='\n'){
        n[count-1]='\0';
        count--;
    }
    printf("\nOUTPUT:\n");
    for(int i=0;i<count/2;i++){
        if(n[i]!=n[count-i-1]){
            printf("No");
            return 0;
        }
    }
	printf("Yes");
	return 0;
}

