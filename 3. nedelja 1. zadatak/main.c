#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Napisati program koji prihvata naziv fajla a zatim u tom fajlu prebacuje sva mala slova u velika.
int main()
{
    int x,i;
    char naziv[100];
    char s1[100],ch;
    printf("Unesite naziv fajla: ");
    gets(naziv);
    FILE *fp;
    fp = fopen(naziv,"r+");
    if (fp== NULL)
    {
        printf("Nije otvorena dadoteka!");
        return 1;
    }
    x=('a')-('A');
    i=0;
    while(1)
    {
        if (feof(fp))
        {
            break;
        }
        ch=fgetc(fp);
        if(ch>= 'a' && ch<='z')
        {
            ch= toupper(ch);
        }
        s1[i]=ch;
        i++;
    }
    fseek(fp,0,SEEK_SET);
    fputs(s1,fp);


    return 0;
}
