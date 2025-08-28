// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int num, sum;
    printf("Enter number: ");
    scanf("%d", &num);

    sum = num * (num + 1) / 2;
    printf("Sum = %d\n", sum);
    return 0; }