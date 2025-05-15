#include<stdio.h>
int main()
{
  int n,i;
  printf("Welcome to table.\n");
  printf("Enter a value for a table:\n");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%d x %d = %d",n,i,n*i);
    if(i==5){
      break;
    }
  }
}