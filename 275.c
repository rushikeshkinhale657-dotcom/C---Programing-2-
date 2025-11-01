#include <stdio.h>
int main() {
    int battery;
    printf("Enter battery percentage (0–100): ");
    scanf("%d", &battery);
    switch(battery / 25) {
        case 4: printf("Battery Full"); break;
        case 3: printf("Battery High"); break;
        case 2: printf("Battery Medium"); break;
        case 1: printf("Battery Low"); break;
        default: printf("Battery Critical or Empty");
    }
    return 0;
}
