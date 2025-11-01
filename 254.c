#include <stdio.h>
int main() {
    int color;
    printf("1-Red  2-Yellow  3-Green\nEnter color code: ");
    scanf("%d", &color);
    switch(color) {
        case 1: printf("STOP!"); break;
        case 2: printf("READY!"); break;
        case 3: printf("GO!"); break;
        default: printf("Invalid color");
    }
    return 0;
}
