//Accept character from user and check whether it is small case or not (a-z)
//INPUT  : g
//OUTPUT : TRUE
//INPUT  : D
//OUTPUT : FALSE

#include<stdio.h>
#define TRUE 1
#define False 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    //Apply condition to check whether it is small case or not.
    if (ch>='a'&&ch<='z')
    {
        return TRUE;
    }
    else
    {
        return False;
    }

}
int main()
{
    char cValue='\0';
    BOOL bRet=False;

    printf("Enter the character ");
    scanf("%c",&cValue);

    bRet=ChkSmall(cValue);

    if (bRet==TRUE)
    {
        printf("It is small case character");
    }
    else
    {
       printf("It is not a small case character");
    }
    
    return 0;
}