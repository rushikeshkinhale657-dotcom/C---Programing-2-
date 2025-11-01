#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    switch((year%400==0) ? 1 : (year%100==0) ? 2 : (year%4==0) ? 3 : 0) {
        case 1:
        case 3: printf("Leap Year"); break;
        default: printf("Not a Leap Year");
    }
    return 0;
}
