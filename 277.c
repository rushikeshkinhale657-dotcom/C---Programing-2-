#include <stdio.h>
int main() {
    int key;
    printf("1.Lock Door 2.Unlock Door 3.Status\nEnter option: ");
    scanf("%d", &key);
    switch(key) {
        case 1: printf("Door Locked"); break;
        case 2: printf("Door Unlocked"); break;
        case 3: printf("Door Status Checked"); break;
        default: printf("Invalid Command");
    }
    return 0;
}
