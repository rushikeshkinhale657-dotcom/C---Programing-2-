#include <stdio.h>
int main() {
    int ch, a, b;
    do {
        printf("\n1.Add 2.Sub 3.Exit: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter a,b: "); scanf("%d %d",&a,&b);
                printf("Sum=%d", a+b); break;
            case 2:
                printf("Enter a,b: "); scanf("%d %d",&a,&b);
                printf("Diff=%d", a-b); break;
            case 3:
                printf("Exiting..."); break;
            default:
                printf("Invalid");
        }
    } while(ch != 3);
    return 0;
}
