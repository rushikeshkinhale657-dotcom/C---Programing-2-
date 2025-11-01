#include <stdio.h>
int main() {
    int soil;
    printf("Enter soil moisture level (1-Dry, 2-Moist, 3-Wet): ");
    scanf("%d", &soil);
    switch(soil) {
        case 1: printf("Soil dry — Turning ON water pump"); break;
        case 2: printf("Soil moist — Monitoring..."); break;
        case 3: printf("Soil wet — Pump remains OFF"); break;
        default: printf("Invalid moisture level");
    }
    return 0;
}
