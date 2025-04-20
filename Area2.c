#include <stdio.h>

int main()
{
  float radius;
  float pi = 3.14;
 
 
  printf("Enter the radius of circle :\n");
  scanf("%f", &radius);
  
   float area = pi * radius * radius;

  printf("The Area of Circle is : %f", area);

 return 0; 
}
