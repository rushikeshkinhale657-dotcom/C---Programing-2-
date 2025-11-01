#include <stdio.h>
int main() {
    int level;
    printf("1.Low 2.Medium 3.High 4.Off\nEnter brightness level: ");
    scanf("%d", &level);
    switch(level) {
        case 1: printf("Light at Low brightness"); break;
        case 2: printf("Light at Medium brightness"); break;
        case 3: printf("Light at High brightness"); break;
        case 4: printf("Light turned Off"); break;
        default: printf("Invalid brightness level");
    }
    return 0;
}
