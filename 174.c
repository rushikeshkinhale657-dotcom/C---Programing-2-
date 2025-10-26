#include <stdio.h>
int main(){
    float temp;
    scanf("%f",&temp);
    if(temp > 40) printf("High Temperature Alert!");
    else printf("Normal Temp");
    return 0;
}
