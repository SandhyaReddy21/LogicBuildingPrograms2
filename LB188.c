//Assignment:38
/*Write a program which accept one number from user and toggle 7th bit of that number.
Returned modified number*/
//Input  : 137
//Output : 201
#include<stdio.h>
int ToggleBit(int iNo)
{
        int iMask = 0X00000040;
        int iResult = 0;
        iResult = iNo ^ iMask;

       return iResult;
}
int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter number..:");
   scanf("%d",&iValue);
   iRet=ToggleBit(iValue);
   printf("Updated number is :%d\n",iRet);
   
   return 0;
}