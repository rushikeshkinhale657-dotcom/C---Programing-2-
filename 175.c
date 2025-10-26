#include <stdio.h>
int main(){
    int s[5], i, min, max;
    for(i=0;i<5;i++) scanf("%d",&s[i]);
    min = max = s[0];
    for(i=1;i<5;i++){
        if(s[i]<min) min=s[i];
        if(s[i]>max) max=s[i];
    }
    printf("Min=%d Max=%d",min,max);
    return 0;
}
