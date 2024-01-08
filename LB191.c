//Assignment:39
/*Write a program which accept one number from user and position from user and check
whether bit at that position is on or off.If bit is one return true otherwise return false.*/
//Input  : 10 2
//Output :True
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(int iNo,int iPos)
{
        int iMask = 0X00000001;
        int iResult = 0;
        iMask=iMask<<(iPos-1);
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
}
int main()
{
   int iValue=0,iPos=0;
   bool bRet=false;
   printf("Enter number..:");
   scanf("%d",&iValue);
   printf("Enter the position..:");
   scanf("%d",&iPos);
   bRet=CheckBit(iValue,iPos);
   if (bRet==true)
   {
     printf("True",bRet);
   }
   else
   {
     printf("False");
   }
   

   return 0;
} 