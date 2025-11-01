#include <stdio.h>
int main() {
    char mode;
    printf("Enter mode (A-Active, S-Sleep, P-PowerOff): ");
    scanf(" %c", &mode);
    switch(mode) {
        case 'A': case 'a': printf("Active Mode"); break;
        case 'S': case 's': printf("Sleep Mode"); break;
        case 'P': case 'p': printf("Power Off"); break;
        default: printf("Invalid Input");
    }
    return 0;
}
