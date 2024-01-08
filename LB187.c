//Assignment:38
/*Write a program which accept one number from user and off 7th bit and 10th bit of that number
.Returned modified number*/
//Input  : 577
//Output :1
#include<stdio.h>
int OffBit(int iNo)
{
        int iMask = 0X00000240;
        int iResult = 0;
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
   int iValue=0;
   int iRet=0;
   printf("Enter number..:");
   scanf("%d",&iValue);
   iRet=OffBit(iValue);
   printf("Updated number is :%d\n",iRet);
   
   return 0;
}