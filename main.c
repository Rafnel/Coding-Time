#include <stdio.h>

int main() {

    int Choice = -1;

    do {

        printf("1. Add\n"
               "2. Subtract\n"
               "3. Multiply\n"
               "4. Divide\n"
               "5. Power\n"
               "6. Log\n"
               "0. Exit\n");

        printf("Select the operation you would like to perform!\n");
        scanf("%d", &Choice);
        printf("Choice = %d\n", Choice);

        if (Choice == 1) {

        } else if (Choice == 2) {

        } else if (Choice == 3) {

        } else if (Choice == 4) {

        } else if (Choice == 5) {

        } else if (Choice == 6) {

        }
    } while(Choice != 0);

    return 0;
}