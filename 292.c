#include <stdio.h>
int main() {
    float val[5], sum=0, max;
    int i;
    printf("Enter 5 sensor readings: ");
    for(i=0;i<5;i++){
        scanf("%f",&val[i]);
        sum += val[i];
        if(i==0 || val[i]>max) max = val[i];
    }
    printf("Average = %.2f, Max = %.2f", sum/5, max);
    return 0;
}
