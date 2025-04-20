/* 
 Take a number(n) from user & output its cube(n*n*n).

*/

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a value : ");
    scanf("%d", &n);
    
    printf("The Cube of given value is: %d\n", n*n*n);
    
    return 0;
}
