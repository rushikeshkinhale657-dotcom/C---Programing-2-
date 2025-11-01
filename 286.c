#include <stdio.h>
int main() {
    int i, n;
    float sensor[50], sum = 0;
    printf("Enter number of readings: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Reading %d: ", i+1);
        scanf("%f", &sensor[i]);
        sum += sensor[i];
    }
    printf("Average Sensor Reading = %.2f", sum/n);
    return 0;
}
