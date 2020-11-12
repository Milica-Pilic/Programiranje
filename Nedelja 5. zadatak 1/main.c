#include <stdio.h>
#include <stdlib.h>

typedef struct elementi
{
    int broj;
    struct elementi *sledeci;
} Elementi;

Elementi* create(int broj,Elementi* sledeci)
{
    Elementi* new_node = (Elementi*)malloc(sizeof(Elementi));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }

    new_node->broj = broj;
    new_node->sledeci = sledeci;

    return new_node;
}

Elementi* prepend(Elementi* head,int broj)
{
    Elementi* new_node = create(broj,head);
    head = new_node;
    return head;
}

Elementi* append(Elementi* head, int broj)
{
    if(head == NULL)
        return NULL;
    Elementi *cursor = head;
    while(cursor->sledeci != NULL)
        cursor = cursor->sledeci;

    Elementi* new_node =  create(broj,NULL);
    cursor->sledeci = new_node;

    return head;
}

void ispis (Elementi* head)
{
    Elementi* cursor = head;
    while(cursor != NULL)
    {
        printf("Data : %d \n",cursor->broj);
        cursor = cursor->sledeci;
    }
}

int duzina (Elementi *head)
{
    Elementi *tek;
    int n = 0;
    for (tek=head; tek; tek=tek->sledeci)
    {
        n++;
    }
    printf("\nBroj elemenata u listi je: %i\n",n);
    return 0;
}

void brisanje(Elementi *head)
{
    Elementi *cursor, *tmp;

    if(head != NULL)
    {
        cursor = head->sledeci;
        head->sledeci = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->sledeci;
            free(cursor);
            cursor = tmp;
        }
    }
}
int main()
{
    int command = 0;
    int broj;

    Elementi* head = NULL;

	head = prepend(head,1);
	append(head, 2);
	append(head, 3);
	append(head, 4);
	ispis(head);

	printf("----------\n");
	append(head, 11);
    ispis(head);
	printf("----------\n");
	duzina(head);


    brisanje(head);
    ispis(head);
    return 0;
}
