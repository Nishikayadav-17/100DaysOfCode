#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Clear input buffer
    getchar();

    // Take line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}