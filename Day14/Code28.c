// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i, product = 1;   
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i; }

    if (n < 2) {
        printf("\nNo even numbers in the range 1 to %d.\n", n); }
    else {
        printf("\nProduct of even numbers = %lld\n", product); }

return 0; }
