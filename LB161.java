//ASSIGNMENT--:33
/*Write java program which accept N numbers from user and return difference between summation of even
 elements and summation of odd elements.*/
//Input    : 6
//Elements : 85 66 3 80 93 88
//Output   : 53(234-181)
import java.util.*;

class LB161
{
    public static int difference(int Brr[])
    {
        int iCnt = 0, iDifferance = 0;int iEven=0; int iOdd=0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          if((Brr[iCnt] % 2) == 0)
            {
                iEven=iEven+Brr[iCnt];
            }
            if((Brr[iCnt] % 2) != 0)
            {
               iOdd=iOdd+Brr[iCnt];
            }
        }
        iDifferance=iEven-iOdd;
        return iDifferance;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = difference(Arr);

        System.out.println("Addition of all elements is : "+iRet);

        sobj.close();
    }
}