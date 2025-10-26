#include <stdio.h>
int main(){
    int v;
    scanf("%d",&v);
    if(v<200) printf("LOW");
    else if(v<600) printf("MEDIUM");
    else printf("HIGH");
    return 0;
}
