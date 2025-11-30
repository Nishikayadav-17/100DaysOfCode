// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // input size of square matrix

    int matrix[100][100];
    int isDistinct = 1;  // assume distinct

    // input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check diagonal elements
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;  // not distinct
                break;
            }
        }
        if(!isDistinct) break;
    }

    if(isDistinct)
        printf("True");
    else
        printf("False");

    return 0;
}
