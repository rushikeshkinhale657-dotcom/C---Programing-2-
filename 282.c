#include <stdio.h>
int main() {
    int state;
    printf("1.Power ON\n2.Standby\n3.Power OFF\nEnter choice: ");
    scanf("%d", &state);
    switch(state) {
        case 1: printf("System powering ON... Sensors Initializing"); break;
        case 2: printf("System in Standby Mode"); break;
        case 3: printf("System shutting down..."); break;
        default: printf("Unknown power state");
    }
    return 0;
}
