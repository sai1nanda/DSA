#include<stdio.h>
#define ROW 3
#define COL 4
int main(){
    int mat[ROW][COL] , i,j;
    printf("Enter elements of matrix : ");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&mat[ROW][COL]);
        }
    }
    printf("Matrix is : ");
    for(i=0;i<ROW;i++){
        for ( j = 0; j < COL; j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
