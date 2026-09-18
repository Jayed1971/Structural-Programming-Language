#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 40) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}
