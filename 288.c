#include <stdio.h>
int main() {
    float val, sum = 0;
    int count = 0;
    printf("Enter sensor readings (-1 to stop):\n");
    while(1) {
        scanf("%f", &val);
        if(val < 0) break;
        sum += val;
        count++;
    }
    if(count > 0)
        printf("Average = %.2f", sum/count);
    else
        printf("No valid readings!");
    return 0;
}
