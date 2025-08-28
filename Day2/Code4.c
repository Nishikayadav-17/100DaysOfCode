// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", pi * radius * radius);
    printf("Circumference = %.2f\n", 2 * pi * radius);
return 0; }