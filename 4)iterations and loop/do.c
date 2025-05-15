#include<stdio.h>
int main()
{
  int i;
  do{
    printf("Enter a number:",i);
    scanf("%d",&i);
}
  while(i!=10);

  printf("You got it");
  return 0;
} 