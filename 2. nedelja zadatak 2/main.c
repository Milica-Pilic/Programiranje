#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char* naziv = "primer.txt";
    f=fopen(naziv,"r+");
    if (f== NULL)
    {
        printf("Nije otvorena dadoteka");
        return 1;
    }
    char c,pom;
    int brojac=0;
    printf("Unesite karakter za prebrojavanje: ");
    scanf("%c",&c);

    while(1)
    {
      pom = fgetc(f);
      if( feof(f) )
      {
         break ;
      }
      if(pom==c)
      {
        brojac++;
      }
    }
   fclose(f);
   printf("Ima %i karaktera.",brojac);


    return 0;
}
