// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int dq[n], front = 0, rear = -1; // deque implemented with array

    for(int i = 0; i < n; i++) {

        // Remove elements out of this window
        if(front <= rear && dq[front] <= i - k)
            front++;

        // Remove smaller elements from the back
        while(front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        // Add current index
        dq[++rear] = i;

        // Print max when window size first becomes k
        if(i >= k - 1)
            printf("%d ", arr[dq[front]]);
    }

    return 0;
}