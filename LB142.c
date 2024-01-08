//Assignment :29
/*Write a program which search last occurrence of particular element from singly linear linked list*/
/*Function Prototype :
int SearchLastOcc(PNODE Head ,int no);
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element :30
Output :6*/
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
int SearchLastOcc(PNODE Head ,int no)
{
   int iPos = -1;
    int iCnt = 1;

    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
           iPos = iCnt;
        }
        Head = Head -> next;
        iCnt++;
    }

    return iPos;
      
}
int main()
{
    PNODE First=NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 11);
    InsertFirst(&First, 11);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet = SearchLastOcc(First,11);
    printf("LastOccurance is : %d\n",iRet);

    return 0;

}