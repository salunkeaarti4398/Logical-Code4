#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;



void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements From the LinkedList Are :\n");

    while(First != NULL)
    {
        printf(" | %d |->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}



int main()
{
    PNODE Head = NULL;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);
    
    return 0;
}