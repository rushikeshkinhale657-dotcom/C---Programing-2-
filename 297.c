#include <stdio.h>
int main() {
    float s[5], sum=0, min;
    int i;
    printf("Enter 5 sensor readings: ");
    for(i=0;i<5;i++) {
        scanf("%f", &s[i]);
        sum += s[i];
        if(i==0 || s[i]<min) min = s[i];
    }
    printf("Average = %.2f, Minimum = %.2f", sum/5, min);
    return 0;
}
