#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,niz[100],n,max;
    printf("Unesite broj elemenata niza: ");
    scanf("%i",&n);
    printf("\nUnesite elemente niza: ");
    for(i=0;i<n;i++)
    {
        scanf("%i",niz + i);

    }
    max=*(niz + 0);
    for(i=1;i<n;i++)
    {
        if(*(niz + i)>max)
        {
            max=*(niz + i);
        }
    }
    printf("Maksimalan element je: %i",max);
    return 0;
}
