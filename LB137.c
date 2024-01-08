/*Write a program which accept string from user and accept one character.Return frequency of that character*/
//INPUT  : "Marvellous Multi OS"  M
//OUTPUT : 2
//INPUT  : "Marvellous Multi OS" W
//OUTPUT : 0

#include<stdio.h>
int CountChar(char *str,char ch)
{
    int count=0;
    //for (int i= str[ch]; str [ch]< '\0'; i++)

//while (*str != '\0')
    for(int i=str[i];*str!='\0';i++)
    {
      
    if (str[i]==ch)
    {
       count++;
    }
   
   str[i]++;
 }
   //str++;
}

int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character  :");
    scanf("%s",&cValue);

    iRet=CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);
    
    return 0;
}