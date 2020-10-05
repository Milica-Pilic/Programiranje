#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,niz[100],n;
    printf("Unesite broj elemenata niza: ");
    scanf("%i",&n);
    printf("\nUnesite elemente niza: ");
    for(i=0;i<n;i++)
    {
        scanf("%i",niz + i);

    }
    printf("\nElementi koji su deljivi sa 3 su:");
    for(i=0;i<n;i++)
    {
    if(*(niz + i)%3==0)
        {
            printf(" %i",*(niz + i));
        }
    }


    return 0;
}
