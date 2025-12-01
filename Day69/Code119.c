#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    int visited[n];  

    // Initialize visited array to 0
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;   
        }
        visited[arr[i]] = 1;
    }

    printf("%d", repeated);
    return 0;
}
