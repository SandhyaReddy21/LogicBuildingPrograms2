//ASSIGNMENT--:32
//Write a java program which accept string from user and display it in reverse order.
//Input  : "MarvellouS"
//Output : "SuollevraM"

import java.util.Scanner;

class Program160
{
    public static void  reverse(String str)
    {
        int iCnt = 0;
        String nstr=" ";
        char ch;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
                ch= str.charAt(iCnt); //extracts each character
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

