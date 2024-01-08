/*Write a program which accept string from user and display it in reverse order*/
//INPUT  : "Marvellous"
//OUTPUT : "suollevraM"
#include<stdio.h>
int Reverse(char *ptr)
{
  //char ch=*str;
   //int size=0;
  /*for (int i = str; i!='\0'; i--)
  {
    //ch=*(str+i);
    //size--;
    printf("%d",str);
  }*/
   char temp='\0';
    char*ptr2=NULL;

    ptr2=ptr;

    while(*ptr != '\0')
    {
        ptr++;
    }
    ptr=ptr-1;

    while(ptr2<ptr)
    {
        temp=*ptr2;
        *ptr2=*ptr;
        *ptr=temp;
        ptr2++;
        ptr--;
    }
    return;
  
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}