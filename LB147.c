//Assignment :30
/*Write a program which displays all elements which are prime from singly linear linked list*/
/*Function Prototype :
int DisplayPrime(PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output :11 17 41 89*/
#include<stdio.h>
#include<stdlib.h>
#define True 1 
#define False 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head,int no)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));
  newn->next=NULL;
  newn->data=no;
  if (*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
    newn->next=*Head;
    *Head=newn;
  }
  
}
void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int DisplayPrime(PNODE Head)
{
    printf("Even elements are : \n");

    while(Head != NULL)
    {
        if(((Head->data) % 2) != 0)
        {
            printf("%d\n",Head->data);
        }
        Head = Head -> next;
    }
}
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,10);
    InsertFirst(&First,2);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    
   DisplayPrime(First);


    return 0;

}


