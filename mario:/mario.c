#include <stdio.h>
#include <cs50.h>

// matthew hu 16 September 2020

int main(void) {
    int amount = 0;
    do {
        amount = get_int("Height: ");
    } while (amount < 1 || amount >= 9);

    if (amount > 0 && amount <= 8) {
        for (int i = 0; i < amount; i++) {
            for (int j = amount - i - 1; j > 0 ; j--) {
                printf(" ");
            }
            for (int j = amount - (amount - i); j >= 0; j--) {

                printf("#");
            }
            printf("  ");
            for (int j = -1; j < amount - (amount - i); j++) {
                printf("#");
            }
            printf("\n");
        }
    }
}