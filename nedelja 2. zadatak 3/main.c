#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void naciRec (FILE *f,char s1[100],int duzina) //ovaj zadatak nije zavrsen,
                                            //uspela sam da program prebroji broj reci i
                                            //napise koliko ih ima i prebroji koliko ima najduza rec ali ne
                                            // da je i ispise.
{
    int i=0;
    char pom;
    while(1)
    {
        pom =fgetc(f);
        if(pom==' ' || feof(f))
        {
            break;
        }
        else
        {
           s1[i]=pom;
           i++;
        }
    }
    duzina = i;
}

int main()
{
    FILE *f;
    char* naziv = "ulaznad.txt";
    f=fopen(naziv,"r+");
    if (f== NULL)
    {
        printf("Nije otvorena dadoteka");
        return 1;
    }
    char s1[100],s2[100];
    int duzina=0,pom=0,brojac=0,i;
    while(1)
    {
      if( feof(f) )
      {
         break ;
      }
      else
      {
        naciRec(f,s1,duzina);
        brojac++;
        //printf("%i",brojac);
        printf("%s\n",s1);

        if(duzina>pom)
        {
            for(i=0;i<strlen(s1);i++)
            {
                s2[i]=s1[i];
                printf("%s",s2);
            }
            printf("%s",s2);
            pom=duzina;
        }
        //printf("%s",s2);
      }
    }
    FILE *fi;
    char* nazivi = "izlaznad.txt";
    fi=fopen(nazivi,"w+");
   fprintf(fi,"%s %i %s","Ulazni fajl ima",brojac, "reci.\n");
   fprintf(fi,"%s %s","Najveca rec je",s2);

   fclose(f);
   fclose(fi);


    return 0;
}
