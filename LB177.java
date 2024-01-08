//ASSIGNMENT--:36
/*Write a program which accept 2 strings from user and check whether contents of two strings are equal or not*/
//Input    : "Marvellous Infosystems"
//           "Marvellous Infosystems"
//Output   : true
import java.util.*;

class LB177
{
   public static boolean ChkStrings(String Str1,String Str2) 
   {
     if (Str1.equals(Str2)) 
     {
        return true;
     }
     else
     {
        return false;
     }
   }
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);
        String Str1=null;String Str2=null;int iNo=0;boolean bRet=false;
        System.out.println("Enter 1st string");
        Str1=sobj.nextLine();
        System.out.println("Enter 2nd string");
        Str2=sobj.nextLine();
        bRet=ChkStrings(Str1, Str2);
        if (bRet==true) 
        {
            System.out.println(true);
        }
        else
        {
            System.out.println(false);
        }
        sobj.close();
    }
}
