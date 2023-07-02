/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to calculate square a given number. Number is entered by the user.
   IDE        :VS Code
*/
#include<stdio.h>
int main()
{
    int a,sqr;
    printf("Enter any integer:"); //taking input from user
    scanf("%d",&a);
    sqr=a*a;//calculating squre of that no using multiplication operator (*)
    printf("\nSquare value:%d",sqr);//printing result on screen
    return(0);
}
