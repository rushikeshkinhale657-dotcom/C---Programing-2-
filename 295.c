#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float *s, sum=0;
    printf("Enter number of sensors: ");
    scanf("%d", &n);
    s = (float*)malloc(n * sizeof(float));
    for(i=0;i<n;i++){
        printf("Sensor %d: ", i+1);
        scanf("%f",&s[i]);
        sum += s[i];
    }
    printf("Average Reading = %.2f", sum/n);
    free(s);
    return 0;
}
