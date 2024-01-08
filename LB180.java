//ASSIGNMENT--:36
/*Accept string from user and check whether the string is palindrome or not without considering its case*/
//Input    : "1abccBA1"
//Output   : True
import java.util.Scanner;
 
class LB180
{
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter a string as an input to check whether it is palindrome or not");
        String input= scanner.nextLine();
        //checking whether palindrome or not
        if(isPalindrome(input))
        {
            System.out.println(input+" is a palindrome string");
        }
        else
        {
            System.out.println(input+" is not a palindrome string");
        }
    }
 
    public static boolean isPalindrome(String str) {
        int left = 0, right = str.length() - 1;
        
        while(left < right)
        {
            if(str.charAt(left) != str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    } 
}


