#include <stdio.h>
int main(){
    int light;
    scanf("%d",&light);
    if(light < 200) printf("LED ON");
    else printf("LED OFF");
    return 0;
}
