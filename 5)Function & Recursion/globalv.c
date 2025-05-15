#include<stdio.h>
void sum(int,int);
int add;//global variable
int main()
{
  sum(5,10);
  printf("%d\n",add);
 
  return 0;
}
void sum(int x,int y)
{
  add=x+y;
}