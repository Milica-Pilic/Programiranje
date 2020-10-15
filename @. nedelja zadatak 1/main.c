#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char* naziv = "sadrzaj.txt";
    f=fopen(naziv,"w+");
    if (f == NULL)
    {
        printf("nije");
        return 1;
    }
    char s1[100];
    printf("Unesite ime, prezime i broj u dnevniku: ");
    gets(s1);
    fputs(s1,f);

    return 0;
}
