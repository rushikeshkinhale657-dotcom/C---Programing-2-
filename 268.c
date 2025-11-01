#include <stdio.h>
int main() {
    int choice;
    float a,b;
    printf("1.Add 2.Advanced\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter a,b: "); scanf("%f%f", &a, &b);
            printf("Sum=%.2f", a+b);
            break;
        case 2:
            printf("1.Multiply 2.Divide: ");
            int sub; scanf("%d",&sub);
            printf("Enter a,b: "); scanf("%f%f",&a,&b);
            switch(sub) {
                case 1: printf("Product=%.2f", a*b); break;
                case 2: printf("Quotient=%.2f", b!=0?a/b:0); break;
                default: printf("Invalid subchoice");
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
