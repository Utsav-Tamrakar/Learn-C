#include<stdio.h>
int main()
{
  int age;
  char name[15];
  printf("Enter your name:\n");
  scanf("%s",name);
  printf("Enter your age: \n");
  scanf("%d",&age);
  printf("Name:%s\n",name);
  printf("Age:%d",age);
  if(age>18)
  {
    printf("\nEligible for vote");
  }
  else{
    printf("\nNot Eligible for a vote");
  }
  return 0;
  }