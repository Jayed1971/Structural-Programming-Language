#include <stdio.h>

struct Student {
    int id;
    float gpa;
};

int main() {
    struct Student s1;

    s1.id = 101;
    s1.gpa = 3.85;

    printf("ID: %d\n", s1.id);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
