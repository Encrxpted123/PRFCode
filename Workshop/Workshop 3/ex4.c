#include <stdio.h>

void show_menu() {
    printf("\n===== MAY TINH BO TUI =====\n");
    printf("1. Cong\n");
    printf("2. Tru\n");
    printf("3. Nhan\n");
    printf("4. Chia\n");
    printf("Khac. Thoat\n");
    printf("Chon: ");
}

void processor() {
    int choice;
    float a, b, result;

    do {
        show_menu();
    	if (scanf("%d", &choice)!=1){
    		break;
	   }

        switch(choice) {

            case 1:
                printf("Nhap a: ");
				while (scanf("%f", &a)!=1){
					printf("Nhap a: ");
					fflush(stdin);
				}
                printf("Nhap b: ");
				while (scanf("%f", &b)!=1){
					printf("Nhap b: ");
					fflush(stdin);
				}
                result = a + b;
                printf("Ket qua: %.2f\n", result);
                break;

            case 2:
                printf("Nhap a: ");
				while (scanf("%f", &a)!=1){
					printf("Nhap a: ");
					fflush(stdin);
				}
                printf("Nhap b: ");
				while (scanf("%f", &b)!=1){
					printf("Nhap b: ");
					fflush(stdin);
				}
                result = a - b;
                printf("Ket qua: %.2f\n", result);
                break;

            case 3:
                printf("Nhap a: ");
				while (scanf("%f", &a)!=1){
					printf("Nhap a: ");
					fflush(stdin);
				}
                printf("Nhap b: ");
				while (scanf("%f", &b)!=1){
					printf("Nhap b: ");
					fflush(stdin);
				}
                result = a * b;
                printf("Ket qua: %.2f\n", result);
                break;

            case 4:
                printf("Nhap a: ");
				while (scanf("%f", &a)!=1){
					printf("Nhap a: ");
					fflush(stdin);
				}
                printf("Nhap b: ");
				while (scanf("%f", &b)!=1){
					printf("Nhap b: ");
					fflush(stdin);
				}
                if (b == 0) {
                    printf("Loi: Khong the chia cho 0!\n");
                } else {
                    result = a / b;
                    printf("Ket qua: %.2f\n", result);
                }
                break;

            default:
                break;
        }
    } while (choice != 0);
}

int main() {
    processor();
    return 0;
}