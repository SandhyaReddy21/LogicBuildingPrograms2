//Assignment:40
/*Write a program which accept one number, two position from user and check whether 
bit at first or bit at second position is ON or OFF*/
//Input  : 10 3 7
//Output : true
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(int iNo,int iPos,int iiPos)
{
        int iMask = 0X00000001;
        int iResult = 0;
        iMask=iMask<<(iPos-1)&(iiPos-1);
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
   int iValue=0,iPos=0,iiPos=0;
   bool bRet=false;
   printf("Enter number..:");
   scanf("%d",&iValue);
   printf("Enter the position..:");
   scanf("%d",&iPos);
   printf("Enter the 2nd position..:");
   scanf("%d",&iiPos);
   bRet=CheckBit(iValue,iPos,iiPos);
   if (bRet==true)
   {
     printf("True");
   }
   else
   {
     printf("False");
   }
   

   return 0;
} 