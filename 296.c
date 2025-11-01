#include <stdio.h>
int main() {
    float s1, s2, avg;
    printf("Enter sensor1, sensor2 readings: ");
    scanf("%f %f", &s1, &s2);
    s1 += 0.5; // calibration offset
    s2 += 0.5;
    avg = (s1 + s2) / 2;
    printf("Calibrated Average = %.2f", avg);
    return 0;
}
