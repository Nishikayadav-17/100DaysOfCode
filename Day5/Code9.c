// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, simpleint, compoundint;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    simpleint = (principal * rate * time) / 100;
    compoundint= principal*pow((1+rate/100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleint);
    printf("Compound Interest = %.2f\n", compoundint);
    return 0; }