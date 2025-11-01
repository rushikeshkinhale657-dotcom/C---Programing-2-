#include <stdio.h>
int main() {
    float s[5], sum=0, avg;
    int i;
    printf("Enter 5 sensor readings: ");
    for(i=0;i<5;i++){
        scanf("%f",&s[i]);
        sum += s[i];
    }
    avg = sum/5;
    printf("Average = %.2f", avg);
    if(avg > 50) printf(" -> High level detected!");
    else printf(" -> Normal range.");
    return 0;
}
