#include <stdio.h>
int main(){
    int battery;
    scanf("%d",&battery);
    if(battery < 20) printf("LOW Battery");
    else printf("Battery OK");
    return 0;
}
