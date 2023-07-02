// WAP to calculate area of rectangle.Input approprite data from the user.
#include <stdio.h>
int main()
{
    int area, l, w;
    printf("Enter length and breadth: "); // input values for lenght & width
    scanf("%d%d", &l, &w);
    if (l <= 0 || w <= 0) // check whether input is valid or
    {
        printf("\nInvalid Input");
    }
    else
    {
        area = l * w;
        printf("\nArea Of Rectangle Is %d", area);
    }
    return 0;
}