//ASSIGNMENT--:35
/*Write java program which accept N numbers from user and accept one another number as NO, return index
of last occurrence of that NO */
//Input    : 6
//NO       :66
//Elements : 85 66 3 66 93 88
//Output   : 3
import java.util.*;

class LB173
{
    public static void IndexOcc(int Brr[],int iSize)
    {
        int iCnt = 0;int iPos=-1;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          while (Brr[iCnt]!=0) 
          {
            if (Brr[iCnt]==iSize)
            {
                iPos=iCnt;
            }
            iCnt++;
          }
        }
         System.out.print(iCnt+"\t");
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
        System.out.println("Enter the element that you want to search: ");
        iSize  = sobj.nextInt();
         
        IndexOcc(Arr,iSize);

        sobj.close();
    }
}