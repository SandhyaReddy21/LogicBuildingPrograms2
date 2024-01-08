/*Accept character from user. If it is capital then display all the characters from the input characters 
till Z.If input character is small then print all the characters in reverse order till a. In other case a
return directly*/
//INPUT  : Q
//OUTPUT : Q R S T U V W X Y Z
//INPUT  : m
//OUTPUT : m i k j i h g f e d c b a
//INPUT  : 8
//OUTPUT :
#include<stdio.h>
void Display(char ch)

{
    for (ch= ch; ch<='Z'; ch++)
     {
         if (ch>='A' && ch<='Z')
        {
            printf("%c\t",ch);
        }
     }
}

int main()
{
    char cValue='\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}