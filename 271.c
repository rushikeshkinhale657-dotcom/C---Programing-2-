#include <stdio.h>
int main() {
    int dir;
    printf("1.Forward 2.Backward 3.Left 4.Right 5.Stop\nEnter direction: ");
    scanf("%d", &dir);
    switch(dir) {
        case 1: printf("Robot moving forward"); break;
        case 2: printf("Robot moving backward"); break;
        case 3: printf("Robot turning left"); break;
        case 4: printf("Robot turning right"); break;
        case 5: printf("Robot stopped"); break;
        default: printf("Invalid command");
    }
    return 0;
}
