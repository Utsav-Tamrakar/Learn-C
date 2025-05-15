#include<stdio.h>
#include<conio.h>
int main()
{
  int no,count=0,i;
  printf("Enter a number:\n");
  scanf("%d",&no);
  for(i=1;i<=no;i++)
  {
    if(no%i==0)
    {
      count++;
    }
  }
  if(count==2)
  {
    printf("Number is prime\n");
  }else{
    printf("Number is not prime\n");
  }
  return 0;
}