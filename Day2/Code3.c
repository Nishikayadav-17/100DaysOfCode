//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    int L,B, perimeter;
    printf("Enter length");
    scanf("%d", &L);
    printf("Enter breadth");
    scanf("%d", &B);
perimeter= 2*(L+B);
    printf("The perimeter is: %d", perimeter);
    return 0; }

