#include<stdio.h>
void count_to_100();//Function prototype
int sum(int ,int); //function prototype
int main()
{
  int a,b;
  printf("Enter two numbers:\n");
  scanf("%d%d",&a,&b);
  int add=sum(a,b);
  printf("%d\n",add);
  count_to_100();//Function call
  // count_to_100();//Function call
  // count_to_100();//Function call
  return 0;
}
void count_to_100()//Function definition
{
  for(int i=1;i<=100;i++)
  {
    printf("%d\n",i); 
  }
}
int sum(int x,int y)
{
  int sum=x+y;
  return sum;
}