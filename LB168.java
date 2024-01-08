//ASSIGNMENT--:34
/*Write java program which accept number from user and return the count of digits in between 3 and 7(countrange).*/
//Input    : 2395
//Output   : 1
import java.util.*;

class Program168
{
    public static int CountRange(int iNo)
    {
      int iDiggit= 0;int iCnt=0;
     
        while (iNo!= 0)  
        {
          iDiggit=iNo%10;
          if ((iDiggit>3)&&(iDiggit<7))
           {
             iCnt++;
           }
           iNo=iNo/10;
        }
        return iCnt;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iAns = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iAns = CountRange(iValue);

        System.out.println("Count of even digits : "+iAns);
        sobj.close();
    }
}