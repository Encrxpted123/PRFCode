#include<stdio.h>
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
void inputArr(int a[], int n){
	for (i=0,i<n,i++){
		printf("Nhap phan tu %d: ",i);
		while(scanf("%d",a[i])!=1){
			printf("Nhap phan tu %d: ",i);
			fflush(stdin);
		}
	}
}
void outputArr(int a[],int n){
	for (i=0,i<n,i++){
		printf("%d ",a[i]);
	}
}
int isPrime(int n){
	int i;
	for (i=1,i<=n,i++){
		if (0==n%i && i!=n){
			return 0;			
		}
		else if (i==n){
			return 1;
		}	
	}
}

int countPrimes(int a[],int n){
	
}
	
int main(){
	int x = 10;
	doubleX2(&x);
	printf("Gia tri x= %d: ", x);
	
	int *p;
	p = &x; //con tro tên p trỏ đến
	printf("Dia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	
	//x = x + x;
	*p = (*p) + (*p);
	printf("\nGia tri cua x la: %d",x);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);

	//p trỏ đến y
	int y = 5;
	p = &y; //p trỏ đến y
	printf("\nDia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	*p = *p + x;
	printf("\nGia tri cua y la: %d",y);
	
	
	return 0;
}