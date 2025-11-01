#include <stdio.h>
int main() {
    int choice;
    printf("1.Add\n2.Subtract\n3.Multiply\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Addition selected"); break;
        case 2: printf("Subtraction selected"); break;
        case 3: printf("Multiplication selected"); break;
        default: printf("Invalid choice");
    }
    return 0;
}
