#include <stdio.h>
int main() {
    int n; float val, sum = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%f",&val);
        sum += val;
    }
    printf("Avg = %.2f", sum/n);
    return 0;
}
