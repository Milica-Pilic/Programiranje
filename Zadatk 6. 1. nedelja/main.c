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
void addmat(int mat1[][100],int mat2[][100],int r,int k,int zbir[][100])
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            *(*(zbir + i) + j)=*(*(mat1 + i) + j)+*(*(mat2 + i) + j);
        }
    }
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
   int mat1[100][100],mat2[100][100],zbir[100][100],r,k;
    printf("Umesite dimenzije matrice: ");
    scanf("%i%i",&r,&k);
    printf("\nUnesite elemente prve matrice: ");
    readmat(mat1,r,k);
    printf("\n");
    printf("\nUnesite elemente druge matrice: ");
    readmat(mat2,r,k);
    addmat(mat1,mat2,r,k,zbir);
    printf("Zbir dve matrice je: \n");
    printmat(zbir,r,k);
    return 0;
}
