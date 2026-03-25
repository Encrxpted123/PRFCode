#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("baitap1.txt","w");
	if(fp==NULL){
		printf("blepblep");
		return 0;
	}
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	fprintf(fp,"Gia tri n: %d",n);
	fclose(fp);
	return 0;
}