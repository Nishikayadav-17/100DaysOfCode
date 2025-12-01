#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File contains no numbers.\n");
        return 1;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}