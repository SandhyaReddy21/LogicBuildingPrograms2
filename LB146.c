//Assignment :30
/*Write a program which displays all elements which are perfect from singly linear linked list*/
/*Function Prototype :
int DisplayPerfect(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :6 28*/
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
int DisplayPerfect(PNODE Head)
{
  int iCnt=0;
    printf("Factors of %d are : \n",Head);
    //   1       2        3
    for(iCnt=1;iCnt<Head;iCnt++)
    {
        if ((Head==iCnt)==0)//4
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
    PNODE First=NULL;
     int iRet= 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    
    iRet = DisplayPerfect(First);
    printf(" Perfect elements from all the elements are: %d\n",iRet);

    return 0;

}


