#include<stdio.h>
int sum(int,int);
int main()
{
  int add,a,b;
  printf("Enter two numbers:\n");
  scanf("%d%d",&a,&b);
  sum(a,b);
  printf("%d",add);
  int x,y,z;
  x=5;y=10;
  z=sum(x,y);
  printf("%d",z);
  return 0;
}
int sum(int x,int y)
{
  return(x+y);
}
