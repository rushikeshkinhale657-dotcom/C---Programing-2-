#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch((ch >= 'A' && ch <= 'Z') ? 1 : (ch >= 'a' && ch <= 'z') ? 2 : 3) {
        case 1: printf("Uppercase letter"); break;
        case 2: printf("Lowercase letter"); break;
        case 3: printf("Not a letter");
    }
    return 0;
}
