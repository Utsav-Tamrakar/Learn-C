#include<stdio.h>
int main()
{
  int age;
  char is_nepali[5];
  printf("Enter your age: \n");
  scanf("%d",&age);
  printf("Are you Nepali citizen(Y/N): \n");
  scanf(" %c",&is_nepali);
  if(is_nepali=='Y' && age>=18 && age<70)
  {
    printf("You are eligible for license");
  }
  else{
    printf("You are not eligible for a license");
  }

  // if(is_nepali=='Y')
  // {
  // if(age<18)
  // {
  //   printf("\nNot Eligible for vote");
  // }
  // else if(age>70)
  // {
  //   printf("\nToo old not eligible");
  // }
  // else
  // {
  //   printf("\n Eligible t2o vote");
  // }
  // }
  // else{
  //   printf("\nThis is only for Nepali citizen");
  // }

 return 0;
  }