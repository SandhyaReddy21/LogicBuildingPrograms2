/*Write a program which accept string from user and count number of small characters*/
//INPUT  : "Marvellous"
//OUTPUT : 9
#include<stdio.h>
int CountSmall(char *str)
{
     int iCnt=0;
    //filter
    while (*str!='\0')
    {
        if ((*str>='a')&& (*str<='z'))
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
    int iRet=0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    iRet=CountSmall(arr);

    printf("%d",iRet);

    return 0;
}