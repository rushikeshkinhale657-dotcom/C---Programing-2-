#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, val;
    printf("Enter number of sensors: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter reading %d: ", i+1);
        scanf("%f", &val);
        sum += val;
    }
    printf("Average Reading = %.2f", sum / n);
    return 0;
}
