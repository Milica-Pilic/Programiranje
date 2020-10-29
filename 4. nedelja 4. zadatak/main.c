#include <stdio.h>
#include <stdlib.h>
void niz(int br); //i tried ok...
{
  int i;

}
int main()
{
    int br;
    printf("Unesite broj: ");
    scanf("%i",&br);
    int *niz =(int*) malloc(br * sizeof(int));
    return 0;
}
