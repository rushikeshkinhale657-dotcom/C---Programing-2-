#include <stdio.h>
int main() {
    int option;
    printf("1.Calibrate Temperature Sensor\n2.Calibrate IR Sensor\n3.Calibrate Ultrasonic Sensor\nEnter choice: ");
    scanf("%d", &option);
    switch(option) {
        case 1: printf("Temperature sensor calibration complete."); break;
        case 2: printf("IR sensor calibration complete."); break;
        case 3: printf("Ultrasonic sensor calibration complete."); break;
        default: printf("Invalid calibration option.");
    }
    return 0;
}
