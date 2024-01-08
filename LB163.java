//ASSIGNMENT--:33
/*Write java program which accept N numbers from user and display all such elements which are even divisible by 5.*/
//Input    : 6
//Elements : 85 66 3 80 93 88
//Output   : 80
import java.util.*;

class LB163
{
    public static void EvenDivisible(int Brr[])
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < Brr.length; iCnt++)
        {
          if(((Brr[iCnt] % 5) == 0)&&((Brr[iCnt] % 2) == 0))
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }

public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        EvenDivisible(Arr);

        sobj.close();
    }
}