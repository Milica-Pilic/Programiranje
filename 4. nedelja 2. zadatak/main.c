#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Unesite duzinu niza: \n");
    int n,s=0,i;
    do{
    scanf("%i", &n);
    }while(n<=0);


    int *niz =(int*) malloc(n * sizeof(int));
    if(niz==NULL){
            printf("nema dovoljno memorije\n");
            return 1;
    }
    for(i = 0; i < n; ++i){
        printf("Unesite %i. element: ", i + 1);
        scanf("%i", niz+i);
        s=s+niz[i];
    }
    printf("\nProsecna vrednost je: %f",(float)s/n);
    free(niz);
    return 0;

}
