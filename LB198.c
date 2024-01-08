//Assignment:40
/*Write a program which accept one number from user and check whether 
9th or 12th bit is on or off*/
//Input  : 257
//Output : false
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
{
        int iMask = 0x00000900;
        int iResult = 0;
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
   int iValue=0;
   bool iRet=false;
   printf("Enter number..:");
   scanf("%d",&iValue);
   iRet=Check(iValue);
   if (iRet==true)
   {
     printf(" 9th and 12th bit is on");
   }
   else
   {
     printf(" 9th and 12th bit is off");
   }
   

   return 0;
}