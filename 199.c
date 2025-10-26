#include <stdio.h>

int main(){
    int sensor;
    scanf("%d",&sensor);
    switch(sensor){
        case 0: printf("LED OFF"); break;
        case 1: printf("LED ON"); break;
        default: printf("Error");
    }
    return 0;
}
