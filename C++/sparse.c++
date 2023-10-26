#include<stdio.h>
 
int main()
{
    
    int mat[10][10],mat_trans[10][10],row,col,nonZeroValue,i=0,j=0;
    printf("\nEnter number of row and columns : ");
    scanf("%d %d",&row,&col);
    printf("\nEnter number of non zero element : ");
    scanf("%d",&nonZeroValue);
    mat[0][0]=row;
    mat[1][0]=col;
    mat[2][0]=nonZeroValue;
    printf("\nEnter non-zero value in triple format : \n");
    for(i=1;i<=nonZeroValue;i++)
    {
        printf("\nFor value %d -",i);
        printf("\n\tEnter Row No.,Column No.and value : ");
        scanf("%d %d %d",&mat[0][i],&mat[1][i],&mat[2][i]);
    }
    printf("\n**** SPARSE MATRIX IS ****");
    printf("\nNO.of row \t No. Of colums \t NO. of nonzero value");

    printf("\n[%d]\t\t[%d]",mat[0][0],mat[1][0],mat[2][0]);
    for(i=1;i<=nonZeroValue;i++)

    {
        mat_trans[1][0] = mat[1][0];
        mat_trans[1][0] = mat[0][0];
        mat_trans[2][0] = mat[2][0];

         for(i=1;i<=nonZeroValue;i++)

    {
        mat_trans[0][1] = mat[1][i];
        mat_trans[1][1] = mat[0][i];
        mat_trans[2][1] = mat[2][i];
    }

    }

    return 0;
}