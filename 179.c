#include <stdio.h>
int main(){
    int s[5],thr;
    scanf("%d",&thr);
    for(int i=0;i<5;i++) scanf("%d",&s[i]);
    for(int i=0;i<5;i++)
        if(s[i]>thr) printf("%d ",s[i]);
    return 0;
}
