#include <stdio.h>
int main() {
    int i, j;
    float s[3][4], avg, sum;
    for(i=0;i<3;i++) {
        sum = 0;
        printf("\nSensor %d readings:\n", i+1);
        for(j=0;j<4;j++){
            scanf("%f", &s[i][j]);
            sum += s[i][j];
        }
        avg = sum/4;
        printf("Sensor %d Average = %.2f\n", i+1, avg);
    }
    return 0;
}
