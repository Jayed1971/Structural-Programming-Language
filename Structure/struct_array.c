#include <stdio.h>

struct Student {
    int roll;
    int marks;
};

int main() {
    struct Student std[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter roll and marks for student %d: ", i + 1);
        scanf("%d %d", &std[i].roll, &std[i].marks);
    }

    printf("\n--- Student Info ---\n");
    for (i = 0; i < 3; i++) {
        printf("Roll: %d, Marks: %d\n", std[i].roll, std[i].marks);
    }

    return 0;
}
