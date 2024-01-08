//ASSIGNMENT--:35
/*Write java program which accept number from user and accept one another number as NO,check whether NO 
is present or not*/
//Input    : 6
//NO       :66
//Elements :65 66 3 93 88
//Output   : true
import java.util.*;

class LB171
{
    public static void PresentORNot(int Brr[],int iSize)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < Brr.length; iCnt++)
        {
          if(Brr[iCnt] ==iSize) 
            {
                System.out.print("True"+"\t");
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
        System.out.println("Enter the element that you want to search: ");
        iSize  = sobj.nextInt();
         
        PresentORNot(Arr,iSize);

        sobj.close();
    }
}