#include <stdio.h>
int main() {
    int ch;
    float t, result;
    printf("1.C to F\n2.F to C\nEnter choice: ");
    scanf("%d", &ch);
    printf("Enter temperature: ");
    scanf("%f", &t);
    switch(ch) {
        case 1: result = (t * 9/5) + 32; break;
        case 2: result = (t - 32) * 5/9; break;
        default: printf("Invalid"); return 0;
    }
    printf("Converted = %.2f", result);
    return 0;
}
