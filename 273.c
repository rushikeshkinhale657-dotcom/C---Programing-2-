#include <stdio.h>
int main() {
    int mode;
    printf("1.Cooling 2.Heating 3.Standby\nEnter mode: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Cooling Mode Active"); break;
        case 2: printf("Heating Mode Active"); break;
        case 3: printf("System in Standby"); break;
        default: printf("Invalid Mode");
    }
    return 0;
}
