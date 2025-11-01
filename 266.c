#include <stdio.h>
int main() {
    int ch, bal = 1000, amt;
    printf("1.Deposit 2.Withdraw 3.Balance\nEnter choice: ");
    scanf("%d", &ch);
    switch(ch) {
        case 1:
            printf("Enter amount: "); scanf("%d", &amt);
            bal += amt; printf("New Balance = %d", bal); break;
        case 2:
            printf("Enter amount: "); scanf("%d", &amt);
            if(amt <= bal) bal -= amt;
            else printf("Insufficient balance\n");
            printf("Balance = %d", bal); break;
        case 3:
            printf("Balance = %d", bal); break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
