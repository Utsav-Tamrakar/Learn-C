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
  if(age<18)
  {
    printf("\nNot Eligible for vote");
  }
  else if(age>70)
  {
    printf("\nToo old not eligible");
  }
  else
  {
    printf("\n Eligible to vote");
  }
  return 0;
  }