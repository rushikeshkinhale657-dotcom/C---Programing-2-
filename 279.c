#include <stdio.h>
int main() {
    int color;
    printf("1.Red 2.Green 3.Blue 4.White\nSelect color: ");
    scanf("%d", &color);
    switch(color) {
        case 1: printf("Red Light ON"); break;
        case 2: printf("Green Light ON"); break;
        case 3: printf("Blue Light ON"); break;
        case 4: printf("White Light ON"); break;
        default: printf("Invalid Color Choice");
    }
    return 0;
}
