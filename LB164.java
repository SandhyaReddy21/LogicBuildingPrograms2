//ASSIGNMENT--:33
/*Write java program which accept N numbers from user and display all such elements which are divisible by 3 and 5.*/
//Input    : 6
//Elements : 85 66 3 15 93 88
//Output   : 15
import java.util.*;

class LB164
{
    public static void Divisible(int Brr[])
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < Brr.length; iCnt++)
        {
          if(((Brr[iCnt] % 3) == 0)&&((Brr[iCnt] % 5) == 0))
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

        Divisible(Arr);

        sobj.close();
    }
}