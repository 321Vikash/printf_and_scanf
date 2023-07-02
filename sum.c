/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to calculate sum of two integer.Number are taken  from user through keybord.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter first number: "); // Taking input for the first number
    scanf("%d", &a);
    printf("\n");
    printf("Enter second number: "); // Taking Input For The Second Number
    scanf("%d", &b);
    sum = a + b;                // Calculating Sum Of Two Numbers Using '+' Operator And Assign
    printf("Sum is %d\n", sum); // Printing Output To User
    return (0);                 // Return Statement
}
