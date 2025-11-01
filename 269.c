#include <stdio.h>
int main() {
    int cmd;
    printf("1.Start 2.Stop 3.Reverse\nEnter command: ");
    scanf("%d", &cmd);
    switch(cmd) {
        case 1: printf("Motor Started"); break;
        case 2: printf("Motor Stopped"); break;
        case 3: printf("Motor Reversed"); break;
        default: printf("Invalid Command");
    }
    return 0;
}
