#include <stdio.h>
int main() {
    float readings[10], sum=0;
    int i, count=0;
    printf("Enter 10 sensor values (ignore <0): ");
    for(i=0;i<10;i++) {
        scanf("%f",&readings[i]);
        if(readings[i] >= 0) {
            sum += readings[i];
            count++;
        }
    }
    printf("Filtered Average = %.2f", (count>0)?sum/count:0);
    return 0;
}
