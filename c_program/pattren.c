#include <stdio.h>
#include <conio.h>

void main() {
    for (int i = -2; i <= 240; i++) {
        if (i == 0) {
            continue;
        }
        if (i <= 80) {
            for (int j = 1; j <= 81; j++) {
                if (i % 3 == 0 && j > (81 - i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }

            for (int j = 82; j <= 162; j++) {
                if (i % 3 == 0 && j < (82 + i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }
        }

        if (i > 80 && i <= 160) {
            if (i % 3 == 0) {
                printf("\n");
                continue;
            }
            for (int j = 1; j <= 80; j++) {
                if ((i - 1) % 3 == 0 && j > (160 - i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }

            for (int j = 82; j <= 162; j++) {
                if ((i - 1) % 3 == 0 && j < i + 3) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }
        }

        if (i > 160) {
            if (i % 3 == 0 || (i - 1) % 3 == 0) {
                printf("\n");
                continue;
            }
            for (int j = 1; j <= 80; j++) {
                if ((i - 2) % 3 == 0 && j > (239 - i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }

            for (int j = 82; j <= 162; j++) {
                if ((i - 2) % 3 == 0 && j < i - 76) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = -2; i <= 240; i++) {
        if (i == 0) {
            continue;
        }
        if (i <= 80) {
            for (int j = 1; j <= 81; j++) {
                if (i % 3 == 0 && j > (81 - i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }

            for (int j = 82; j <= 162; j++) {
                if (i % 3 == 0 && j < (82 + i)) {
                    printf(" ");
                    continue;
                }
                printf("*");
            }
        }

        if (i > 80 && i <= 160) {
            if (i % 3 == 0) {
                for (int j = 0; j <= 160; j++) {
                    printf("*");
                }
                continue;
            }
            for (int j = 1; j <= 80; j++) {
                if ((i - 1) % 3 == 0 && j > (160 - i)) {
                    printf("*");
                    continue;
                }
                printf(" ");
            }

            for (int j = 82; j <= 162; j++) {
                if ((i - 1) % 3 == 0 && j < i + 3) {
                    printf("*");
                    continue;
                }
                printf(" ");
            }
        }

        if (i > 160) {
            if (i % 3 == 0 || (i - 1) % 3 == 0) {
                for (int j = 0; j <= 160; j++) {
                    printf("*");
                }
                continue;
            }
            for (int j = 1; j <= 80; j++) {
                if ((i - 2) % 3 == 0 && j > (239 - i)) {
                    printf("*");
                    continue;
                }
                printf(" ");
            }

            for (int j = 82; j <= 162; j++) {
                if ((i - 2) % 3 == 0 && j < i - 76) {
                    printf("*");
                    continue;
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}