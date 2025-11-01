#include <stdio.h>
int main() {
    int unit;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &unit);
    switch(unit / 100) {
        case 0: bill = unit * 1.5; break;
        case 1: bill = 150 + (unit-100)*2.0; break;
        case 2:
        case 3: bill = 350 + (unit-200)*3.0; break;
        default: bill = 950 + (unit-400)*5.0;
    }
    printf("Total Bill: ₹%.2f", bill);
    return 0;
}
