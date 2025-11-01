#include <stdio.h>
int main() {
    int mode;
    printf("Select Mode:\n1.Manual\n2.Automatic\n3.Sleep\nEnter: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Manual Mode Activated"); break;
        case 2: printf("Automatic Mode Running"); break;
        case 3: printf("System in Sleep Mode"); break;
        default: printf("Unknown Mode");
    }
    return 0;
}
