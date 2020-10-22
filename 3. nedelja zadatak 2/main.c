#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Iz zadate ulazne datoteke učitati statički niz struktura, pri čemu se struktura sastoji od sledećih polja:
//broj gostiju (prirodan broj)
//naziv željene pizze (jedna reč, do 20 karaktera)
//Na osnovu prosečnog apetita gostiju u parčadima pizze apetit (pozitivan realan broj) formirati novi statički niz struktura i upisati ga u zadatu izlaznu datoteku, pri čemu se struktura porudzbina sastoji od sledećih polja:
//broj potrebnih parčadi (zaokružen na 1 decimalu, koristiti "%5.1f" format specifikator)
//broj potrebnih celih pizza (koristiti "%2u" format specifikator)
//naziv željene pizze (koristiti funkciju strcpy prilikom kopiranja iz strukture zelja_st)
//Smatrati da se jedna cela pizza seče na 8 jednakih parčadi.
typedef struct stolovi
{
    int brgost;
    char pizza[20];
    float apetit;

}Stolovi;
Stolovi stolovi[100];
typedef struct porudzbina
{
    float brparc;
    int brpizza;
    char naziv[100];
}Porudzbina;
Porudzbina porudzbina[100];
int brstolova=0;
int ucitajStolove(FILE *f,Stolovi *s)
{
    fscanf(f,"%i%s%f",&(s->brgost),s->pizza,&(s->apetit));
    if(feof(f))
    {
        return 0;
    }
    else
    {
        return 1;
    }

}
int main()
{
    char naziv[100];
    printf("Unesite naziv fajla: ");
    gets(naziv);
    FILE *f;
    f = fopen(naziv,"r+");
    if (f == NULL)
    {
        printf("Nije otvorena dadoteka!");
        return 1;
    }
    while(ucitajStolove(f,&stolovi[brstolova]))
    {
        porudzbina[brstolova].brparc=stolovi[brstolova].apetit*stolovi[brstolova].brgost;
        porudzbina[brstolova].brpizza=porudzbina[brstolova].brparc/8;
        strcpy(porudzbina[brstolova].naziv,stolovi[brstolova].pizza);
        brstolova++;
    }
    int i;
    FILE *f1;
    f1 = fopen("porudzbina.txt","w+");
    for(i=0;i<brstolova;i++)
    {
        fprintf(f1,"%5.1f %2u %s",porudzbina[i].brparc,porudzbina[i].brpizza,porudzbina[i].naziv);
    }
    return 0;
}
