#include <stdio.h>

int main(){
    int mode;
    scanf("%d",&mode);
    switch(mode){
        case 1: printf("Line Following Mode"); break;
        case 2: printf("Obstacle Avoidance Mode"); break;
        case 3: printf("Light Seeking Mode"); break;
        default: printf("Invalid Mode");
    }
    return 0;
}
