#include <stdio.h>

void add(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            C[i][j]=A[i][j]+B[i][j];
}

int main(){
    int A[3][3],B[3][3],C[3][3];
    printf("Enter matrix A:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) scanf("%d",&A[i][j]);
    printf("Enter matrix B:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) scanf("%d",&B[i][j]);
    add(A,B,C);
    printf("Sum:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
