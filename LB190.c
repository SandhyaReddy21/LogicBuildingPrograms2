//Assignment:38
/*Write a program which accept one number from user and on its first 4 bits.
Returned modified number*/
//Input  : 73
//Output : 70
#include<stdio.h>
int OnBit(int iNo)
{
        int iMask = 0X0000000f;
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
   iRet=OnBit(iValue);
   printf("Updated number is :%d\n",iRet);
   
   return 0;
}