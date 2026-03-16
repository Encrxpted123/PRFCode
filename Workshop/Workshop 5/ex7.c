#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	char a[101];
	fgets(a,101,stdin);
	int n = strlen(a);
	int textCount=0,symbolCount=0,numbCount=0;
	for(int i=0;i<n;i++){
		if(a[i] >= 65 && a[i] <= 122){
			textCount+=1;
		}
		else if(a[i]>=48 && a[i] <= 57){
			numbCount+=1;
		}
		else if(a[i]=='\0' || a[i]=='\n') break;
		else{
			symbolCount+=1;
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d\n",numbCount);
	printf("%d\n",textCount);
	printf("%d",symbolCount);
	return 0;
}

