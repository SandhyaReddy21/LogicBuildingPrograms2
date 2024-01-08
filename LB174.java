//ASSIGNMENT--:35
/*Write java program which accept N numbers from user and accept Range,Display all elements from that range*/
//Input    : 6
//start    :60
//End      :90
//Elements : 85 66 3 76 93 88
//Output   : 85 66 76 88
import java.util.*;

class LB174
{
    public static void DisplayRange(int Brr[],int iStart,int iEnd)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          if ((Brr[iCnt] >iStart)&&(Brr[iCnt]<iEnd))
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }

public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iStart=0,iEnd=0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter the starting range: ");
        iStart  = sobj.nextInt();
        System.out.println("Enter the ending range: ");
        iEnd  = sobj.nextInt();
         
        DisplayRange(Arr,iStart,iEnd);

        sobj.close();
    }
}