#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,brojac;
    char s1[20],slovo;
    printf("Unesite string: ");
    gets(s1);
    printf("Unesite slovo za prebrojavanje: ");
    scanf("%c",&slovo);
    brojac=0;
    for(i=0;i<strlen(s1);i++)
        {
            if(*(s1+i)==slovo)
            {
                brojac++;
            }
        }
        printf("Broj pojavljivanja slova %c je: %i",slovo,brojac);
    return 0;
}
