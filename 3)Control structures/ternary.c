#include<stdio.h>
int main()
{
  char gender;
  printf("Enter your gender(M/F): \n");
  scanf("%c",&gender);
  gender=='M'? printf("Male"): printf("Female");

  return 0;
}   