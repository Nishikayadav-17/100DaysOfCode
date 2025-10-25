// Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, original, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}