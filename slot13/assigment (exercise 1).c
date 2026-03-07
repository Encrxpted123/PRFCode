#include <stdio.h>

// Them gia tri vao cuoi mang
void themGiaTri(int a[], int *n, int x) {
    if (*n >= 100) {
        printf("Mang da day!\n");
        return;
    }
    a[*n] = x;
    (*n)++;
}

// Tim gia tri, tra ve vi tri, -1 neu khong co
int timGiaTri(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

// Xoa gia tri x dau tien
void xoaMot(int a[], int *n, int x) {
    int vt = timGiaTri(a, *n, x);
    if (vt == -1) {
        printf("Khong tim thay gia tri.\n");
        return;
    }
    for (int i = vt; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}

// Xoa tat ca gia tri x
void xoaTatCa(int a[], int *n, int x) {
    int j = 0;
    for (int i = 0; i < *n; i++)
        if (a[i] != x)
            a[j++] = a[i];
    if (j == *n)
        printf("Khong tim thay gia tri.\n");
    *n = j;
}

// In mang
void inMang(int a[], int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Mang: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// In tang dan, giu nguyen vi tri logic bang viec quet gia tri
void inTangDan(int a[], int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }
    for (int val = -10000; val <= 10000; val++)
        for (int i = 0; i < n; i++)
            if (a[i] == val)
                printf("%d ", val);
    printf("\n");
}

// In giam dan, giu nguyen vi tri
void inGiamDan(int a[], int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }
    for (int val = 10000; val >= -10000; val--)
        for (int i = 0; i < n; i++)
            if (a[i] == val)
                printf("%d ", val);
    printf("\n");
}

int main() {
    int a[100];
    int n = 0;
    int option, x;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Them gia tri\n");
        printf("2. Tim gia tri\n");
        printf("3. Xoa lan xuat hien dau tien\n");
        printf("4. Xoa tat ca lan xuat hien\n");
        printf("5. In mang\n");
        printf("6. In mang tang dan\n");
        printf("7. In mang giam dan\n");
        printf("Khac: Thoat\n");
        printf("Nhap lua chon: ");
        if(scanf("%d", &option)!=1){
        	printf("Thoat chuong trinh...");
        	return 0;
		}

        switch (option) {
            case 1:
                printf("Nhap gia tri can them: ");
                while(scanf("%d", &x)!=1){
                	printf("Nhap gia tri can them: ");
                	fflush(stdin);
				}
                themGiaTri(a, &n, x);
                break;

            case 2: {
                printf("Nhap gia tri can tim: ");
                while(scanf("%d", &x)!=1){
                	printf("Nhap gia tri can tim: ");
                	fflush(stdin);
                }
                int vt = timGiaTri(a, n, x);
                if (vt == -1) printf("Khong tim thay.\n");
                else printf("Tim thay tai vi tri %d.\n", vt);
                break;
            }
            case 3:
                printf("Nhap gia tri can xoa: ");
                while(scanf("%d", &x)!=1){
                	printf("Nhap gia tri can xoa: ");
                	fflush(stdin);
                }
                xoaMot(a, &n, x);
                break;
            case 4:
                printf("Nhap gia tri can xoa: ");
                while(scanf("%d", &x)!=1){
                	printf("Nhap gia tri can xoa: ");
                	fflush(stdin);
				}
                xoaTatCa(a, &n, x);
                break;
            case 5:
                inMang(a, n);
                break;
            case 6:
                inTangDan(a, n);
                break;
            case 7:
                inGiamDan(a, n);
                break;
            default:
                printf("Thoat chuong trinh...\n");
                return 0;
        }
    } while (1);
    return 0;
}