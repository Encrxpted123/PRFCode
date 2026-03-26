#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float price;
    int quantity;
} Product;

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

void inputProduct(Product *p) {
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

void writeProducts() {
    FILE *f = fopen("products.txt", "wb");
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
        fwrite(&p, sizeof(Product), 1, f);
    }

    fclose(f);
}

void appendProducts() {
    FILE *f = fopen("products.txt", "ab");
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
        fwrite(&p, sizeof(Product), 1, f);
    }

    fclose(f);
}

void readProducts() {
    FILE *f = fopen("products.txt", "rb");
    if (!f) return;

    Product p;

    while (fread(&p, sizeof(Product), 1, f)) {
        printf("\nID: %d\nName: %s\nPrice: %.2f\nQuantity: %d\n",
               p.id, p.name, p.price, p.quantity);
    }

    fclose(f);
}

// 🔥 MODIFY THEO ID
void modifyProduct() {
    FILE *f = fopen("products.txt", "rb+");
    if (!f) return;

    char temp[10];
    int targetID;

    printf("Enter ID to modify: ");
    fgets(temp, sizeof(temp), stdin);
    targetID = atoi(temp);

    Product p;
    int found = 0;

    while (fread(&p, sizeof(Product), 1, f)) {
        if (p.id == targetID) {
            printf("\nEnter new data:\n");
            inputProduct(&p);

            fseek(f, -sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, f);

            found = 1;
            break;
        }
    }

    if (!found) printf("Product not found!\n");

    fclose(f);
}

int main() {
    char choice[10];
    int ch;

    do {
        printf("\n1. Write\n2. Append\n3. Read\n4. Modify\n5. Exit\nChoice: ");
        fgets(choice, sizeof(choice), stdin);
        ch = atoi(choice);

        switch (ch) {
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: readProducts(); break;
            case 4: modifyProduct(); break;
            case 5: exit(0);
            default: printf("Invalid!\n");
        }
    } while (ch != 5);
}