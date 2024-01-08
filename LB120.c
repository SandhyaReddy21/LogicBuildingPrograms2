/*Accept division of student from user and depends on the division display exam timing.There are 4 divisions as A,B,C,D. Exam of
division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)*/
//INPUT  : C
//OUTPUT : Your exam at 9.20 AM
//INPUT  : d
//OUTPUT : Your exam at 10.30 AM

#include<stdio.h>
#define TRUE 1
#define False 0
typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    //Apply condition to check whether it is digit or not.
    if (chDiv=='A'||chDiv=='a')
    {
        printf("Your exam at 7 AM");
    }
    else if (chDiv=='B'||chDiv=='b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if (chDiv=='C'||chDiv=='c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if (chDiv=='D'||chDiv=='d')
    {
        printf("Your exam at 10.30 AM");
    }
     else
     {   
         printf("please enter valid division");
     }
    

}
int main()
{
    char cValue='\0';

    printf("Enter the character ");
    scanf ("%c",&cValue);

    DisplaySchedule(cValue);

    
    return 0;
}