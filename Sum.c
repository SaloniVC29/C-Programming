#include <stdio.h>

int main()
{
  int a;
  int b;
 
  printf("Enter a :\n");
  scanf("%d", &a);

  printf("Enter b :\n");
  scanf("%d", &b); 
  
  int sum = a + b;

  printf("The sum of a & b is : %d", sum);

 return 0; 
}
