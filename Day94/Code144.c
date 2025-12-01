#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that receives structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Input
    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Roll: ");
    scanf("%d", &st.roll);

    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    // Function call
    printStudent(st);

    return 0;
}
