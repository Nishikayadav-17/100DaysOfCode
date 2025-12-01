#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;   // count character

        if (ch == '\n')
            lines++;    // count new line

        // word detection logic
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    // If file is not empty but does not end with '\n', count last line
    if (characters > 0)
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
