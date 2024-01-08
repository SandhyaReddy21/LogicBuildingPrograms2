/* Write a program which accept string from user and display only digits from that string*/
//INPUT    :  "Marve89llous121 "
//OUTPUT   :  89121
//INPUT    :  "Demo"
//OUTPUT   :  

#include<stdio.h>
void DisplayDigit(char *str)
{
    //while (*str != '\0')
    for(int i=0;i!= str[i];i++)
    {
      
    if ((str[i] >= '0' )&& (str[i] <= '9'))
    {
       printf("%d",str[i]);
    }
   
   str[i]++;
 }
 
   //str++;
}
int main() 
{
    char arr[20];

    printf("Enter string  :");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}