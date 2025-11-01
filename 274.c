#include <stdio.h>
int main() {
    int type;
    printf("1.Temperature 2.Light 3.Proximity 4.Sound\nEnter sensor type: ");
    scanf("%d", &type);
    switch(type) {
        case 1: printf("Temperature Sensor Initialized"); break;
        case 2: printf("Light Sensor Initialized"); break;
        case 3: printf("Proximity Sensor Initialized"); break;
        case 4: printf("Sound Sensor Initialized"); break;
        default: printf("Unknown Sensor");
    }
    return 0;
}
