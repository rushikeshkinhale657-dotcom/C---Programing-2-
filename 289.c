#include <stdio.h>
int main() {
    float val, avg = 0;
    int count = 0;
    printf("Enter sensor values (-1 to stop):\n");
    while(1) {
        scanf("%f", &val);
        if(val < 0) break;
        count++;
        avg = avg + (val - avg)/count;
        printf("Current Avg: %.2f\n", avg);
    }
    printf("Final Average: %.2f", avg);
    return 0;
}
