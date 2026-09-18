#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number (enter negative to stop): ");
        scanf("%d", &num);
    } while (num >= 0);

    printf("You entered a negative number. Program finished.\n");

    return 0;
}
