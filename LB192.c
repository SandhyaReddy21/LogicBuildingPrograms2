//Assignment:39
/*Write a program which accept one number and position from user and off that bit.
Return modified number*/
//Input  : 10 2
//Output :8
#include<stdio.h>
#include<stdbool.h>
int OffBit(int iNo,int iPos)
{
        int iMask = 0X00000001;
        int iResult = 0;
        iMask=iMask<<(iPos-1);
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
}
int main()
{
   int iValue=0,iPos=0;
   int iRet=0;
   printf("Enter number..:");
   scanf("%d",&iValue);
   printf("Enter the position..:");
   scanf("%d",&iPos);
   iRet=OffBit(iValue,iPos);
   printf("Updated number is :%d",iRet);
   return 0;
} 