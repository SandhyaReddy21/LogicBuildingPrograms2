//Assignment-37
/*Write a program which checks whether first and last bit is on or off.
First bit means bit number 1 and last bit means bit number 32*/
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
{
        int iMask = 0x80000001;
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
     printf(" first and last bit is on");
   }
   else
   {
     printf(" first and last bit is off");
   }
   

   return 0;
}