#include <stdio.h>

int main(){
    int level;
    scanf("%d",&level);
    switch(level){
        case 0 ... 20: printf("Low Battery"); break;
        case 21 ... 80: printf("Normal Battery"); break;
        case 81 ... 100: printf("Full Battery"); break;
        default: printf("Invalid");
    }
    return 0;
}
