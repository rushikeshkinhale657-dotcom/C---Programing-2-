#include <stdio.h>
int main() {
    int task;
    printf("1.Line Follow\n2.Object Pick\n3.Obstacle Avoid\n4.Stop\nEnter task: ");
    scanf("%d", &task);
    switch(task) {
        case 1: printf("Line Following Mode Active"); break;
        case 2: printf("Object Pickup Activated"); break;
        case 3: printf("Obstacle Avoidance Mode Active"); break;
        case 4: printf("Robot Halted"); break;
        default: printf("Invalid Task Command");
    }
    return 0;
}
