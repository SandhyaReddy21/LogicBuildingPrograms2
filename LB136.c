/*Write a program which accept string from user and accept one character.check whether that character is present in string or not*/
//INPUT  : "Marvellous Multi OS"  e
//OUTPUT : TRUE
//INPUT  : "Marvellous Multi OS" W
//OUTPUT : FALSE

#include<stdio.h>
#define TRUE 1
#define False 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    //while (*str != '\0')
    for(int i=0;i!= ch;i++)
    {
      
    if (str[i]==ch)
    {
       return TRUE;
    }
   
   str[ch]++;
 }
   //str++;
}
int main()
{
    char arr[20];
    char cValue='\0';
    BOOL bRet=False;

    printf("Enter string  :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf("%s",&cValue);

    bRet=ChkChar(arr,cValue);

    if (bRet==TRUE)
    {
        printf("Character found");
    }
    else
    {
       printf("Character not found");
    }
    
    return 0;
}