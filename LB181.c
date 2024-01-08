//Assignment-37
/*Write a program which checks whether 15th bit is on or off*/

#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
{
        int iMask = 0x00004000;
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
     printf("15th bit is on");
   }
   else
   {
     printf("15th bit is off");
   }
   

   return 0;
}