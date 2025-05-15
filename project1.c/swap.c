#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter values of a,b: \n");
  scanf("%d %d",&a,&b);
  printf("Before swapping:a=%d,b=%d\n",a,b);
  a=b;
  b=c;
  c=a;
  printf("After swapping:a=%d,b=%d",a,b);
  return 0;
}