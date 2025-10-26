#include <stdio.h>

int main(){
    char signal;
    scanf(" %c",&signal);
    switch(signal){
        case 'R': printf("Stop"); break;
        case 'Y': printf("Ready"); break;
        case 'G': printf("Go"); break;
        default: printf("Invalid");
    }
    return 0;
}
