//Assignment:39
/*Write a program which accept one number from user and toggle contents of first and last
nibble of the number.Return modified number(Nible is group of 4 bits)*/
#include<stdio.h>
int ToggleBit(int iNo)
{
        int iMask = 0X80000001;
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