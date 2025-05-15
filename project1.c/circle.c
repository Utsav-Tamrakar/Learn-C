#include<stdio.h>
// #include<math.h>
#define PI 3.1425
int main()
{
  float r; float perimeter; float area;
  printf("Enter the value of radius: \n");
  scanf("%d",&r);
  perimeter=2*PI*r;
  printf("Perimeter is %f \n", perimeter);
  area=PI*r*r;
  printf("Area is %f \n", area);
  return 0;
}