#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);
    
    int i = 0;

    // Convert first character if needed
    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    // Traverse the string
    while (str[i] != '\0') {
        // If previous char is space, convert next char to uppercase
        if (str[i] == ' ' && str[i + 1] != '\0') {
            str[i + 1] = toupper(str[i + 1]);
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
