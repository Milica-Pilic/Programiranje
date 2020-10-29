#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,x,brElem=100;
    //printf("Unesite maksimalnu duzinu stringa: \n");
    //scanf("%i",&brElem);
    char* niz = (char*) malloc(brElem * sizeof(char));
    printf("Unesite string: ");
    gets(niz);
    x=('a')-('A');
    i=0;
    for(i=0;i<strlen(niz);i++)
    {
        if(niz[i]>= 'a' && niz[i]<='z')
        {
            niz[i]= toupper(niz[i]);
        }
    }
    puts(niz);
    free(niz);
    return 0;
}
