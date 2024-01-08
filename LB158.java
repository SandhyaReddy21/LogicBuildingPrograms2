/*Write a java program which accept string from user and return difference between frequency
 * of small characters and frequency of capital characters.
 */
//Input : "MarvellouS"
//Output : 6(8-2)
import java.util.*;

class Program158
{
    public static int  diffSC(String str)
    {
        int iCnt = 0;
        int iDifferance = 0; int iCapital = 0; int iSmall = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
               iCapital++;
            }
            
           else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                   iSmall++;
            }
        }
        iDifferance=iCapital-iSmall;
        return iDifferance;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        iRet =  diffSC(str);
        
        System.out.println("differance between capital and small  characters are : "+iRet);
        
        sobj.close();
    }
}

