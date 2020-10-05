#include <stdio.h>
#include <stdlib.h>
void readmat(int mat[][100],int r,int k)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%i",&mat[i][j]);
        }
    }
}
void transmat(int mat[][100],int r,int k,int tmat[][100])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            *(*(tmat + j) + i)=*(*(mat + i) + j);
        }
    }
    return tmat;
}
void printmat(int mat[][100],int r,int k)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            printf(" %i",mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[100][100],tmat[100][100],r,k;
    printf("Umesite dimenzije matrice: ");
    scanf("%i%i",&r,&k);
    printf("\nUnesite elemente matrice: ");
    readmat(mat,r,k);
    printf("Originalna matrica je : \n");
    printmat(mat,r,k);
    transmat(mat,r,k,tmat);
    printf("Transponovana matrica je : \n");
    printmat(tmat,k,r);
    return 0;
}
