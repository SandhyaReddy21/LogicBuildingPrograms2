//ASSIGNMENT--:34
/*Write java program which accept number from user and return multiplication of all digits.*/
//Input    : 2395
//Output   : 270
//Input    : 1018
//Output   : 8
import java.util.*;

class Program169
{
    public static int MultiDigit(int iNo)
    {
      int iDiggit= 0;int iMulti=1;
     
        while (iNo!= 0)  
        {
          iDiggit=iNo%10;
          { 
            iMulti=iMulti*iDiggit;
          }
           iNo=iNo/10;
        }
        return iMulti;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iAns = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iAns = MultiDigit(iValue);

        System.out.println("Count of even digits : "+iAns);
        sobj.close();
    }
}