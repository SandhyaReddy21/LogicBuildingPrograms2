/*Write a program which accept string from user and accept one character.Return index of first occurrence of that character*/
//INPUT  : "Marvellous Multi OS"  M
//OUTPUT :  0
//INPUT  : "Marvellous Multi OS" W
//OUTPUT : -1
//INPUT  : "Marvellous Multi OS" e
//OUTPUT : 4

#include<stdio.h>
int FirstChar(char *str,char ch)
{
     //while (*str != '\0')
     int iCount=0;
    for(int i=0;i!= ch;i++)
    {
      
    if (str[i]==ch)
    {
       printf("%d",str[ch]);
    }
    str++;
 }
   //str++;
}
int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter string  : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character  :");
    scanf("%c",&cValue);

    iRet=FirstChar(arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}