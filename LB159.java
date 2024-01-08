//ASSIGNMENT--:32
//Write a java program which accept string from user and check whether it contains vowels in it or not.
//Input  : "Marvellous"
//Output : True
//Input  : "XYZ"
//Output : False
import java.util.*;

class LB159
{
       public static boolean Chkvowels(String str)
    {
        char iCnt =0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt] == 'a' ||Arr[iCnt] =='A'||Arr[iCnt] =='e'||Arr[iCnt] =='E'||Arr[iCnt] =='i'||Arr[iCnt] =='I'||Arr[iCnt] =='o'||Arr[iCnt] =='O'||Arr[iCnt] =='u'||Arr[iCnt] =='U')
            {
              return true;
            }
            else
            {
               return false;
            }
        }
    }

 public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        boolean  iRet = false;
        System.out.println("Enter String : ");
        str = sobj.nextLine();

         Chkvowels(str);

       //System.err.println();
        if (iRet==true) 
         {
            System.err.println("True");
         }
         else 
         {
            System.err.println("False");
         }
      
        
        sobj.close();
    }
}