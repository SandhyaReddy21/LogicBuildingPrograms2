/*Write a program which accept string from user and count number of capital characters*/
//INPUT  : "Marvellous Multi OS"
//OUTPUT : 4
#include<stdio.h>
int CountCapital(char *str)
{
     int iCnt=0;
    //filter
    while (*str!='\0')
    {
        if ((*str>='A')&& (*str<='Z'))
        {
          iCnt++;
        }

       str++;
    }
    return iCnt;
    
}
int main()
{
    char arr[20];
    int iRet  =0;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    iRet=CountCapital(arr);

    printf("%d",iRet);

    return 0;
}