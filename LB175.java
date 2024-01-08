//ASSIGNMENT--:35----------------------
/*Write java program which accept N numbers from user and return product of all odd elements*/
//Input    : 6
//Elements : 15 66 3 70 10 88
//Output   : 45
import java.util.*;

class LB175
{
    public static int difference(int Brr[])
    {
        int iCnt = 1; int iOdd=1;

        for(iCnt = 1; iCnt < Brr.length; iCnt++)   
        {
          if((Brr[iCnt] % 2) != 0)
            {
                iOdd+=iOdd*Brr[iCnt];
            }
          
        }
       
      return iOdd;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;int iRet=0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet=difference(Arr);

       System.out.println("Product of all odd elements is: "+iRet);

        sobj.close();
    }
}