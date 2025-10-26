#include <stdio.h>

int main(){
    int cmd;
    scanf("%d",&cmd);
    switch(cmd){
        case 1: printf("Motor Forward"); break;
        case 2: printf("Motor Backward"); break;
        case 3: printf("Motor Stop"); break;
        default: printf("Invalid Command");
    }
    return 0;
}
