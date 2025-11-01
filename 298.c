#include <stdio.h>
int main() {
    float s[5], sum=0;
    int i, count=0;
    printf("Enter 5 sensor readings (-1 if failed): ");
    for(i=0;i<5;i++){
        scanf("%f",&s[i]);
        if(s[i] >= 0) { sum += s[i]; count++; }
    }
    if(count > 0)
        printf("Average Reading = %.2f", sum/count);
    else
        printf("All sensors failed!");
    return 0;
}
