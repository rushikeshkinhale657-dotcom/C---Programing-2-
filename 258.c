#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1.Add 2.Subtract 3.Divide\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(choice) {
        case 1: printf("Result = %d", a+b); break;
        case 2: printf("Result = %d", a-b); break;
        case 3: printf("Result = %.2f", b!=0?(float)a/b:0); break;
        default: printf("Invalid choice");
    }
    return 0;
}
