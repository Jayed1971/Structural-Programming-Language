#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 10: ");
    for (i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
