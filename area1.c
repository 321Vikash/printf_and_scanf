/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to find the area of circle.Take radius of the circle from user an input.
   IDE        :VS Code
*/ 
#include <stdio.h>
int main()
{
    float r;
    float area;
    printf("Enter Radius:"); // Taking Input for Raduis
    scanf("%f", &r);
    area = 3.14 * r * r;    // Calculating Area using formula A = π * (radius*radius)
    printf("\nArea Of Circle is:%f", area); // Printing The Result in DMS
    return (0);
}
