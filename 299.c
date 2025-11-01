#include <stdio.h>
int main() {
    int t, i;
    float sum=0, val;
    printf("Enter total time samples: ");
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        printf("Light reading %d: ", i);
        scanf("%f", &val);
        sum += val;
    }
    printf("Average Light Intensity = %.2f", sum/t);
    return 0;
}
