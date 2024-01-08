//Accept character from user and check whether it is capital or not (A-Z)
//INPUT  : F
//OUTPUT : TRUE
//INPUT  : d
//OUTPUT : FALSE

#define True 1
#define False 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    //Apply condition to check whether it is capital or not.
    if (ch>='A'&&ch<='Z')
    {
        return True;
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

    bRet=ChkCapital(cValue);

    if (bRet==True)
    {
        printf("It is capital character");
    }
    else
    {
       printf("It is not a capital character");
    }
    
    return 0;
}