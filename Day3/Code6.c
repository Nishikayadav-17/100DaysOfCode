// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int num1, num2, variable;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    variable = num1;
    num1 = num2;
    num2 = variable;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0; }