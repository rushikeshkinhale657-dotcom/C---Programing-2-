#include <stdio.h>
int main() {
    int temp;
    printf("Enter room temperature: ");
    scanf("%d", &temp);
    switch(temp / 10) {
        case 1: case 2: printf("Fan Speed: Low"); break;
        case 3: printf("Fan Speed: Medium"); break;
        case 4: case 5: printf("Fan Speed: High"); break;
        default: printf("Temperature out of range");
    }
    return 0;
}
