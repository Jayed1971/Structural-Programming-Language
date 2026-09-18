#include <stdio.h>

int getMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 15, y = 25;
    printf("Maximum: %d\n", getMax(x, y));
    return 0;
}
