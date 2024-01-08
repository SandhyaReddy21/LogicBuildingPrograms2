//Assignment :30
/*Write a program which return second maximum element from singly linear linked list*/
/*Function Prototype :
int SecMaximum(PNODE Head);
Input linked list : |110|->|230|->|320|->|241|
Output :240*/
#include<stdio.h>
#include<stdlib.h>
#define True 1 
#define False 0

typedef int BOOL;

struct node
{
    int data;
    struct node*next;
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

int SecMaximum(PNODE Head)
{
      
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
    iRet = SecMaximum(First);
    printf("Second Maximum element from all the elements is: %d\n",iRet);
   
    return 0;

}


