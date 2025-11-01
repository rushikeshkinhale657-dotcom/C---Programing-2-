#include <stdio.h>
int main() {
    int shape;
    float area, a, b;
    printf("1.Circle 2.Rectangle 3.Triangle\nEnter shape: ");
    scanf("%d", &shape);
    switch(shape) {
        case 1: printf("Enter radius: "); scanf("%f", &a);
                area = 3.1415*a*a; break;
        case 2: printf("Enter l,b: "); scanf("%f %f", &a, &b);
                area = a*b; break;
        case 3: printf("Enter base, height: "); scanf("%f %f", &a, &b);
                area = 0.5*a*b; break;
        default: area = 0; printf("Invalid shape");
    }
    if(area>0) printf("Area = %.2f", area);
    return 0;
}
