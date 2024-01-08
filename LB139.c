/*Write a program which accept string from user and accept one character.Return index of lastt occurrence of that character*/
//INPUT  : "Marvellous Multi OS"  M
//OUTPUT :  11
//INPUT  : "Marvellous Multi OS" W
//OUTPUT : -1
//INPUT  : "Marvellous Multi OS" e
//OUTPUT : 4



int LastChar(char *str,char ch)
{
    
}
int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character");
    scanf("%c",&cValue);

    iRet=LastChar(arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}