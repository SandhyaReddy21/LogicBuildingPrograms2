//Assignment :29
/*Write a program which returns largest element from singly linear linked list*/
/*Function Prototype :
int Maximum(PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output :320*/
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
int Maximum(PNODE Head)
{
  PNODE Max=Head;
  while (Head!=NULL)
  {
    if (Max<(Head->data))
    {
      Max = Head->next;
    }
   return Max; 
  }
  

}
int main()
{
    PNODE First=NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    
    iRet = Maximum(First);
    printf(" Maximum element from all the elements is : %d\n",iRet);

    return 0;

}


