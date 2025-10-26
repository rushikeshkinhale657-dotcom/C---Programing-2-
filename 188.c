#include <stdio.h>
int main(){
    int a[8];
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
        if(a[i]>50) printf("%d ",a[i]);
    }
    return 0;
}
