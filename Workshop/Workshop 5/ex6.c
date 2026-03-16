#include <stdio.h>
#include <string.h>

int main(){
	printf("\nINPUT:\n");
	int n;
	while(scanf("%d",&n)!=1 || n<1 || n>10){
		fflush(stdin);
	}
	getchar();
	char a[n][101],temp[101];
	for(int i=0;i<n;i++){
		fgets(a[i],101,stdin);
	}
	printf("\nOUTPUT:\n");
		for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        	if(strcmp(a[i],a[j])>0){
        		strcpy(temp,a[i]);
        		strcpy(a[i],a[j]);
        		strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s",a[i]);
	}
	return 0;
}

