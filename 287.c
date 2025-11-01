#include <stdio.h>
int main() {
    float t, h, p, avg;
    printf("Enter Temperature, Humidity, Pressure: ");
    scanf("%f %f %f", &t, &h, &p);
    avg = (0.4*t + 0.3*h + 0.3*p);
    printf("Weighted Average Sensor Value = %.2f", avg);
    return 0;
}
