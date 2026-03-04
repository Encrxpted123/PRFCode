#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    int secret, guess;

    // Tao so ngau nhien
    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("Doan mo so tu 1 den 100!\n");

    for (int turn = 1; turn <= 7; turn++) {
        printf("Lan %d - Nhap so doan: ", turn);
        while (scanf("%d", &guess)!=1 || guess<=0 || guess>100){
        	printf("Lan %d - Nhap so doan: ",turn);
        	fflush(stdin);
		}

        // Break khi doan dung
        if (guess == secret) {
            printf("Chinh xac! Ban da thang!\n");
            break;
        }

        // Gợi ý cho người chơi
        if (guess < secret)
            printf("So cua ban nho hon!\n");
        else
            printf("So cua ban lon hon!\n");

        // Nếu hết 7 lượt mà vẫn chưa đoán đúng
        if (turn == 7) {
            printf("Ban da het luot! So dung la: %d\n", secret);
        }
    }
}

int main() {
    play_game();
    return 0;
}