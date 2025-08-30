// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter first length: ");
    scanf("%d", &num1);
    printf("Enter second length: ");
    scanf("%d", &num2);
    printf("Enter third length: ");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) 
       {if (num1 == num2 && num2 == num3) 
           {printf("The triangle is Equilateral.\n");}
        else if (num1 == num2 || num2 == num3 || num1 == num2) 
           {printf("The triangle is Isosceles.\n");}
        else 
           {printf("The triangle is Scalene.\n");} }
        else 
           {printf("The given sides do not form a valid triangle.\n");} 
    return 0; }
