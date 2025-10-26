#include <stdio.h>
int main(){
    int IR[10], count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&IR[i]);
        if(IR[i]==1) count++;
    }
    printf("Total detections = %d", count);
    return 0;
}
