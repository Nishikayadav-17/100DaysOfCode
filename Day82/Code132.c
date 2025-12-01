#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    enum TrafficLight signal;

    printf("Enter traffic light (RED/YELLOW/GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input!\n");
        return 0;
    }

    // Print action
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
