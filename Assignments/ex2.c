#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	FILE *fp;
	fp=fopen("baitap2.txt","w");
	fprintf(fp,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(fp,"%d ",a[i]);
	}
	fclose(fp);
	return 0;
	
}