/*Accept character from user and display its ASCII value in decimal,octal and hexadecimal format*/
//INPUT : A
//OUTPUT : Decimal   65
//         Octal     0101
//        Hexdecimal 0X41
#include<stdio.h>
void Display(char ch)
{
    printf("%d\t0%o\t0X%x\n",ch,ch,ch);
}
int main()
{
    char cValue='\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}