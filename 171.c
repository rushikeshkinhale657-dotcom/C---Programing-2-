#include <stdio.h>
int main() {
    float s1, s2, s3, avg;
    scanf("%f %f %f", &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3;
    printf("Average = %.2f", avg);
    return 0;
}
