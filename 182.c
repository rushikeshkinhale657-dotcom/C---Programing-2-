#include <stdio.h>
int main(){
    int cur, base;
    scanf("%d%d",&cur,&base);
    if(abs(cur-base)>5) printf("Sensor Error");
    else printf("OK");
    return 0;
}
