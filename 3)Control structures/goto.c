#include<stdio.h>
int main()
{
  int num;
  input_num://label for goto control statements
  printf("Please enter a num:\n");
  scanf("%d",&num);
  if(num!=4)
  {
    goto input_num;
  }
  return 0;
}