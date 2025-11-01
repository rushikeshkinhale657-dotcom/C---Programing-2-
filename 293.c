#include <stdio.h>
int main() {
    int id, i;
    float readings[3], avg=0;
    printf("Enter Sensor ID (1–3): ");
    scanf("%d", &id);
    printf("Enter 3 readings for Sensor %d:\n", id);
    for(i=0;i<3;i++){
        scanf("%f",&readings[i]);
        avg += readings[i];
    }
    avg /= 3;
    printf("Sensor %d Average = %.2f", id, avg);
    return 0;
}
