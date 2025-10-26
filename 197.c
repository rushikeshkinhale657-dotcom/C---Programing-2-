#include <stdio.h>

int main(){
    int level;
    scanf("%d",&level);
    switch(level){
        case 1: printf("Slow"); break;
        case 2: printf("Medium"); break;
        case 3: printf("Fast"); break;
        default: printf("Invalid Level");
    }
    return 0;
}
