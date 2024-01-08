/*Accept character from user. If character is small display corresponding capital character ,
and if it small then display its corresponding capital.In other cases display as it is*/
//INPUT  : Q
//OUTPUT : q
//INPUT  : m
//OUTPUT : M
//INPUT  : 4
//OUTPUT : 4
//INPUT  : %
//OUTPUT : %
#include<stdio.h>
void Display(char ch)
{
 if (ch>='A' && ch<='Z')
 {
    printf("%c",ch+32);
 }
 else if(ch>='a'&& ch<='z')
 {
    printf("%c",ch-32);
 }
 else
 {
    printf("%c",ch);
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