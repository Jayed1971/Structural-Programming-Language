#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    int result = add(x, y);

    printf("Sum = %d\n", result);
    return 0;
}
