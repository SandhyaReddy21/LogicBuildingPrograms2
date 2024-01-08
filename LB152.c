//Assignment :31
/*Write a program which display all palindrome elements of singly linear linked list*/
/*Function Prototype :
void DisplayPalindrome(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :  11 6 414*/

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
void DisplayPalindrome(PNODE Head)
{
     int iCopy = Head;    // Xerox kadhali
    int iRev = 1;
    int iDigit = -1;

    while(Head != NULL)
    {
        iDigit = Head % 10;
         Head = Head / 10;
        iRev = (iRev * 10) + iDigit;
    }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    //iRet = DisplayPalindrome(First);
    //printf("elements are: %d\n",iRet);
   

    return 0;

}


