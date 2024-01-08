/*Write a program which accept string from user and count whether it contains vowels in it or not*/
//INPUT  : "Marvellous"
//OUTPUT : TRUE
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CountVowel(char *str)
{
    int icnt=0;
 while(*str!='\0')
 {
   if (*str=='A'||*str=='a'||*str=='E'||*str=='e'||*str=='I'||*str=='i'||*str=='O'||*str=='o'||*str=='U'||*str=='u')
   {
     return TRUE;
   }
   else
   {
     str++;
   }
    //str++;
 }
 str++;
    
}
int main()
{
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    bRet=CountVowel(arr);

    if (bRet==TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("Their is no vowel");
    }
    

    return 0;
}