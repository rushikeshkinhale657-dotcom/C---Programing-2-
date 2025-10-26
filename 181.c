#include <stdio.h>
int main(){
    int dist;
    scanf("%d",&dist);
    if(dist < 10) printf("Obstacle Very Close");
    else if(dist <=50) printf("Normal Distance");
    else printf("Clear Path");
    return 0;
}
