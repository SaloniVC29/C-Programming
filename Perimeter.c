/* 
1. a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.
*/

#include <stdio.h>

int main()
{
    int length;
    int width;
    
    printf("Enter the sides of Rectangle : \n");
    
    printf("Length:");
    scanf("%d", &length);
    
    printf("Width:");
    scanf("%d", &width);
    
    printf("The Perimeter of Rectangle is: %d\n", 2*length*width);
    
    return 0;
}
