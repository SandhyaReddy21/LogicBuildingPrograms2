//Assignment :29
/*Write a program which search first occurrence of particular element from singly linear linked list*/
/*Function should return position at which element is found*/
/*Function Prototype :
int SearchFirstOcc(PNODE Head ,int no);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input element :30
Output :3*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

int InsertFirst(PPNODE Head,int no)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=no;
  newn->next=NULL;
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
int SearchFirstOcc(PNODE Head ,int no)
{  
    int iPos = 1;

    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
           break;
        }
        Head = Head -> next;
        iPos++;
    }
     if(Head == NULL)
    {
        return -1;
    }
    else
    {
    return iPos;
    }
  
}
int main()
{
    PNODE First =NULL;
    int iRet=0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet = SearchFirstOcc(First,51);
    printf("FirstOccurance is : %d\n",iRet);
    return 0;
}


