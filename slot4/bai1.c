#include <stdio.h>
int main (){
	int a,b,kq; //khởi tạo giá trị a
	printf("nhap a,b: ");
	kq = scanf("%d%d", &a,&b);
	if (kq>0){
		printf("a= %d, b= %d\n",a,b); //in giá trị a
		printf("yes");
}
	else{
	printf("kq= %d\n",kq); //in giá trị b
	printf("no");
	}
	return 0;
}