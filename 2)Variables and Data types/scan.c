#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character:\n");
  scanf("%c",&c);
  printf("you name begins with:%c",c);
  char name[20];
  printf("\nEnter your name:\n");
  scanf("%s",&name);
  printf("Your name is :%s ",name);
  int age;
  printf("\nEnter your age:\n");
  scanf("%d",&age);
  printf("Your age is : %d",age);
  return 0;
}