//Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*).
//INPUT  : %
//OUTPUT : TRUE
//INPUT  : d
//OUTPUT : FALSE

#include<stdio.h>
#define TRUE 1
#define False 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    //Apply condition to check whether it is special or not.
    if ((ch>='!'&& ch<='/')||(ch>=':'&& ch<='@')||(ch>='['&& ch<='`'))
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

    bRet=ChkSpecial(cValue);

    if (bRet==TRUE)
    {
        printf("It is special character");
    }
    else
    {
       printf("It is not a special character");
    }
    
    return 0;
}