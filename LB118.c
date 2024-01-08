//Accept character from user and check whether it is digit or not (0-9)
//INPUT  : 7
//OUTPUT : TRUE
//INPUT  : d
//OUTPUT : FALSE

#include<stdio.h>
#define TRUE 1
#define False 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    //Apply condition to check whether it is character or not.
    
     if (ch>='0' && ch<='9')
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
    char cValue=0;
    BOOL bRet=False;

    printf("Enter the character ");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);

    if (bRet==TRUE)
    {
        printf("It is Digit");
    }
    else
    {
       printf("It is not a Digit");
    }
    
    return 0;
}