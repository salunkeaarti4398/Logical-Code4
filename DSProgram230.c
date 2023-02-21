#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

#pragma pack(1)
struct node
{
    struct node * next;
    struct node * prev;
    int data;
};

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn; 
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
       (*Last)->next = newn;
       newn->prev = *Last;
       *Last = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void Display(PNODE First,PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Elements of Linked list are : \n");
    do
    {
        printf("| %d |<=> ",First->data);
        First = First->next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;

    if(First == NULL && Last == NULL)
    {
        return;
    }

    printf("Elements of Linked list are : \n");
    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);

    return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }

    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);       //free((*First)->prev);
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }

}

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }

    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free((*First)->prev);     // free((*Last)->next);
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are :%d \n",iRet);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head, &Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&Head, &Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);


    return 0;
}