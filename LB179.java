//ASSIGNMENT--:36
/*Accept string from user and reverse the contents of that string by toggling the case (StRev)*/
//Input    : "aCBdef"
//Output   : "FEDcbA"
import java.util.Scanner;

class Program160
{
    public static void  reverse(String str)
    {
        int iCnt = 0;
        String nstr=" ";
        char ch='\0';

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
                ch= str.charAt(iCnt); //extracts each character
                 if ((ch>='A')&&(ch<='Z'))
                {
                    ch=+32;
                }
                else if((ch>='a')&&(ch<='z'))
                {
                    ;
                }
                nstr= ch+nstr; //adds each character in front of the existing string
        }
         System.out.print("Reversed word: "+ nstr);
       
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        reverse(str);
        
        sobj.close();
    }
}


