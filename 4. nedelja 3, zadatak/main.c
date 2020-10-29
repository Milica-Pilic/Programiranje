#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *niz =(int*) malloc(5 * sizeof(int));
    printf("Unesite duzinu niza: \n");
    int n,s=0,i=0;
    int *niz2;
    do{
    scanf("%i", &n);
    }while(n<=0);
    if(n>5)
    {
        int *niz2 =(int *)realloc(niz, n * sizeof(int));
         free(niz);
    }
    else
    {
        int *niz2=*niz;
         free(niz);
    }
    if(niz2==NULL){
            printf("nema dovoljno memorije\n");
            return 1;
    }
    do{
        ponovi:
        printf("Unesite %i. element: ", i + 1);
        scanf("%i",niz2++);
        printf("    %i",niz2++);
        if(niz2[i]<0)
        {
            printf("Unesite ponovo element niza koji je pozitivan; ");
            goto ponovi;
        }
        i++;

    }while(i<n);
    for(i = 0; i < n; ++i){
        printf("Element na poziciji %i je: %i \n", i + 1, niz2[i]);
    }

    free(niz2);
    return 0;
}
