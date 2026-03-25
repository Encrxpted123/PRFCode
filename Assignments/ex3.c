#include <stdio.h>
#include <string.h>;

struct sinhvien{
	int id;
	char ht[30];
	float grade;
};

int main(){
	struct sinhvien sv;
	FILE *tt;
	tt=fopen("baitap3.txt","w");
	if(tt==NULL){
		printf("Invalid");
		return 0;
	}
	printf("Nhap id: ");
	scanf("%d",&sv.id);
	printf("Nhap ho ten: ");
	fflush(stdin);
	fgets(sv.ht,sizeof(sv.ht),stdin);
	sv.ht[strcspn(sv.ht, "\n")] = '\0';
	fflush(stdin);
	printf("Nhap diem: ");
	scanf("%f",&sv.grade);
	fprintf(tt,"%d\n",sv.id);
	fprintf(tt,"%s\n",sv.ht);
	fprintf(tt,"%.1f\n",sv.grade);
	fclose(tt);
	
	//Doc file
	tt = fopen("baitap3.txt","r");
	fscanf(tt,"%d\n",&sv.id);
	fgets(sv.ht,sizeof(sv.ht),tt); 
    fscanf(tt, "%f", &sv.grade);
    // In ra màn hình
    printf("ID: %d\n", sv.id);
    printf("Ho ten: %s\n", sv.ht);
	printf("Diem: %.1f\n", sv.grade);
    fclose(tt);
}