#include <stdio.h>
int main(){
    int s1,s2;
    scanf("%d%d",&s1,&s2);
    if(s1>s2) printf("S1 Higher");
    else if(s2>s1) printf("S2 Higher");
    else printf("Equal");
    return 0;
}
