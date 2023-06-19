#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayGameStatus(int tries) {
    printf("\n==============================\n");
    printf("    숫자 맞추기 게임\n");
    printf("==============================\n");
    printf("시도 횟수: %d\n", tries);
    printf("==============================\n\n");
}

int main() {
    int secretNumber, guess, tries = 0;
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("숫자 맞추기 게임을 시작합니다!\n");

    while (1) {
        displayGameStatus(tries);
        printf("1부터 100 사이의 숫자를 입력하세요 (0을 입력하면 종료): ");
        scanf("%d", &guess);

        if (guess == 0) {
            printf("게임을 종료합니다. 정답은 %d이었습니다.\n", secretNumber);
            break;
        }

        tries++;

        if (guess == secretNumber) {
            printf("축하합니다! 정답을 맞추셨습니다.\n");

            char choice;
            printf("게임을 다시 시작하시겠습니까? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                secretNumber = rand() % 100 + 1;
                tries = 0;
                printf("새로운 게임을 시작합니다!\n");
            } else {
                printf("게임을 종료합니다.\n");
                break;
            }
        } else if (guess < secretNumber) {
            printf("입력한 숫자가 작습니다. 더 큰 숫자를 시도하세요.\n");
        } else {
            printf("입력한 숫자가 큽니다. 더 작은 숫자를 시도하세요.\n");
        }
    }

    return 0;
}