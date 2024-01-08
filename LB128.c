/*Write a program which accept string from user and return differance between frequency of 
small characters and frequency of capital characters*/
//INPUT  : "MarvellouS"
//OUTPUT : 6 (8-2)
#include<stdio.h>
int Difference(char *str)
{
     int iCnt=0;
     int iCnt1,iCnt2=0;
    //filter
    while (*str!='\0')
    {
        if ((*str>='a')&& (*str<='z'))
        {
         // iCnt1=iCnt+iCnt1;
          iCnt1++;
        }
        if ((*str>='A')&& (*str<='Z'))
        {
          //iCnt2=iCnt+iCnt2;
          iCnt2++;
        }
        
        iCnt=iCnt1-iCnt2;
        str++;
       //iCnt=iCnt1-iCnt2;
    }
    return iCnt;
    
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);
    printf("%d",iRet);

    return 0;
}