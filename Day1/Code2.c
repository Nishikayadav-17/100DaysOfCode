// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int Sum, Difference, Product, Quotient;
    Sum= num1+num2;
    Difference= num1-num2;
    Product= num1*num2;
    Quotient= num1/num2;

    printf("Sum = %d\n", Sum);
    printf("Difference = %d\n", Difference);
    printf("Product = %d\n", Product);
    printf("Quotient = %d\n", Quotient); 
    return 0;
}
