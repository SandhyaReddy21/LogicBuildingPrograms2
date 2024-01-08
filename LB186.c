//Assignment:38
/*Write a program which accept one number from user and off 7th bit of that number if 
it is on.Returned modified number*/
//Input  : 79
//Output :15
#include<stdio.h>
int OffBit(int iNo)
{
        int iMask = 0X00000040;
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