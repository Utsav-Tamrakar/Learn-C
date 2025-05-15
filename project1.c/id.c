#include<stdio.h>
int main()
{
  char name[30];
  int age;
  printf("Enter your Full name: \n");
  scanf("%s",name);
  printf("Enter your age:\n");
  scanf("%d",&age);
  printf("Name:%s\n",name);
  printf("Age:%d",age);
  return 0;
}