// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int num, remainder;
    long long binary = 0;
    int place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;  
    if (num == 0) {
        printf("Binary of 0 = 0\n");
        return 0; }

    while (num > 0) {
        remainder = num % 2;        
        binary = binary + remainder * place; 
        place *= 10; }

    printf("Binary of %d = %lld\n", n, binary);

return 0; }
