//ASSIGNMENT--:34
/*Write java program which accept number from user and return differance between summation of even
digits and summation of odd digits.*/
//Input    : 2395
//Output   : -15(2-17)
//Input    : 1018
//Output   : 6(8-2)
import java.util.*;

class Program170
{
    public static int DiffOEDigit(int iNo)
    {
      int iDiggit= 0;int iEven=0;int iOdd=0;int iDiff=0;
     
        while (iNo!= 0)  
        {
          iDiggit=iNo%10;
          if ((iDiggit%2)==0) 
          {
            iEven=iEven+iDiggit;
          }
          else if((iDiggit%2)!=0) 
          {
            iOdd=iOdd+iDiggit;
          }
           iNo=iNo/10;
        }
         iDiff=iEven-iOdd;
        return iDiff;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iAns = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iAns = DiffOEDigit(iValue);

        System.out.println("differance of even and odd digits : "+iAns);
        sobj.close();
    }
}