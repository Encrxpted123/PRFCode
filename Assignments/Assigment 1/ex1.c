#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float price;
    int quantity;
} Product;

void removeNewline(char *str) { //xóa dấu xuống dòng (khi nhập char)
    str[strcspn(str, "\n")] = 0;
}

void inputProduct(Product *p) { //nhập
    char temp[100];

    printf("Product ID: ");
    fgets(temp, sizeof(temp), stdin);
    p->id = atoi(temp);

    printf("Product Name: ");
    fgets(p->name, sizeof(p->name), stdin);
    removeNewline(p->name);

    printf("Price: ");
    fgets(temp, sizeof(temp), stdin);
    p->price = atof(temp);

    printf("Quantity: ");
    fgets(temp, sizeof(temp), stdin);
    p->quantity = atoi(temp);
}


void writeProducts() { //ghi đè
    FILE *f = fopen("products.txt", "w");
    if (!f) return;

    char temp[10];
    int n;

    printf("Enter number of products: ");
    fgets(temp, sizeof(temp), stdin);
    n = atoi(temp);

    Product p;
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        inputProduct(&p);

        fprintf(f, "%d|%s|%.2f|%d\n",
                p.id, p.name, p.price, p.quantity);
    }

    fclose(f);
}


void appendProducts() { //thêm
    FILE *f = fopen("products.txt", "a");
    if (!f) return;

    char temp[10];
    int n;

    printf("Enter number of products: ");
    fgets(temp, sizeof(temp), stdin);
    n = atoi(temp);

    Product p;
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        inputProduct(&p);

        fprintf(f, "%d|%s|%.2f|%d\n",
                p.id, p.name, p.price, p.quantity);
    }

    fclose(f);
}


void readProducts() { //đọc
    FILE *f = fopen("products.txt", "r");
    if (!f) {
        printf("No data!\n");
        return;
    }

    Product p;

    printf("\nReading products from the file:\n");
    printf("-----------------------------------------------------\n");
    printf("%-14s %-16s %-12s Quantity\n","Product ID","Product Name", "Price");
    printf("-----------------------------------------------------\n");

    while (fscanf(f, "%d|%99[^|]|%f|%d\n",
                  &p.id, p.name, &p.price, &p.quantity) == 4) {

        printf("%-14d %-14s %-14.2f %-14d\n",
               p.id, p.name, p.price, p.quantity);
    }

    printf("-----------------------------------------------------\n");

    fclose(f);
}


void modifyProduct() { //chỉnh sửa (phải quét lại)
    FILE *f = fopen("products.txt", "r");
    if (!f) return;

    Product list[100]; //khai báo mảng tên list (theo struct Product)
    int count = 0;

    while (fscanf(f, "%d|%99[^|]|%f|%d\n",
                  &list[count].id,
                  list[count].name,
                  &list[count].price,
                  &list[count].quantity) == 4) {
        count++;
    }
    fclose(f);

    char temp[10];
    int target, found = 0;

    printf("Enter ID to modify: ");
    fgets(temp, sizeof(temp), stdin);
    target = atoi(temp);

    for (int i = 0; i < count; i++) {
        if (list[i].id == target) {
            printf("\nEnter new data:\n");
            inputProduct(&list[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found!\n");
        return;
    }

    f = fopen("products.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(f, "%d|%s|%.2f|%d\n",
                list[i].id,
                list[i].name,
                list[i].price,
                list[i].quantity);
    }
    fclose(f);

    printf("Updated!\n");
}

// Menu
int main() {
    char temp[10];
    int choice;

    do {
    	printf("\n-- Product Management System --\n");
        printf("\n1. Write\n2. Append\n3. Read\n4. Modify\n5. Exit\nChoice: ");
        fgets(temp, sizeof(temp), stdin);
        choice = atoi(temp);

        switch (choice) {
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: readProducts(); break;
            case 4: modifyProduct(); break;
            case 5: printf("Bye!\n"); break;
            default: printf("Invalid!\n");
        }

    } while (choice != 5);

    return 0;
}