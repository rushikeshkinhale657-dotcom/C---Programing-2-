#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("Sum = %.2f", a+b); break;
        case '-': printf("Difference = %.2f", a-b); break;
        case '*': printf("Product = %.2f", a*b); break;
        case '/': printf("Quotient = %.2f", b!=0?a/b:0); break;
        default: printf("Invalid Operator");
    }
    return 0;
}
