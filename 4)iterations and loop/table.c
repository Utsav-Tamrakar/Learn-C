#include<stdio.h>
int main()
{
  int n,i;
  printf("Multiplication table for any number.\n");
  printf("Please enter a number:\n");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%d x %d =%d \n",n,i,n*i);
  }
  printf("Thank you");
  return 0;
}