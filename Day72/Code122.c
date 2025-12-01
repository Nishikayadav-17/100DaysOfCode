#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}