//Assignment:39
/*Write a program which accept one number and position from user and toggle that bit.
Return modified number*/
//Input  : 10 3
//Output :14
#include<stdio.h>
#include<stdbool.h>
int ToggleBit(int iNo,int iPos)
{
        int iMask = 0X00000001;
        int iResult = 0;
        iMask=iMask<<(iPos-1);
        iResult=iNo ^ iMask;
        return iResult;
       
}
int main()
{
   int iValue=0,iPos=0;
   int iRet=0;
   printf("Enter number..:");
   scanf("%d",&iValue);
   printf("Enter the position..:");
   scanf("%d",&iPos);
   iRet=ToggleBit(iValue,iPos);
   printf("Updated number is :%d",iRet);
   return 0;
} 