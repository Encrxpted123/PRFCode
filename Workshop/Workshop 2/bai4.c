#include <stdio.h>
#include <math.h>

int main (){
	int n;
	printf("Nhap n: ");
	while (scanf("%d",&n) != 1){
		printf("Nhap lai!");
		fflush(stdin);
	}

    int dao = 0;
    int nn = n;

    while (nn != 0){
        int so = nn % 10;       // Lay so cuoi
        dao = dao * 10 + so;    // Dua so cuoi vao so dao
        nn = nn / 10;           // Bo so cuoi
    }

    printf("So dao nguoc cua %d la: %d\n", n, dao);
    return 0;
}