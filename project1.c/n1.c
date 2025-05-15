#include<stdio.h>
int main()
{
  int a=5;
  float b=6.5;
  double c =10;
  char d;
  printf("%d",sizeof(a));
  printf("%f",sizeof(b));
  printf("%d",sizeof(c));
  printf("%c",sizeof(d));
  return 0;
}