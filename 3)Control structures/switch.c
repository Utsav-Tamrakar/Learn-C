#include<stdio.h>
int main()
{
  int day;
  printf("Please enter a number betn(1-7):\n");
  scanf("%d",&day);
  switch (day)
  {
  case 1:
  printf("Sunday");
    break;
  case 2:
  printf("Monday");
    break;
    case 3:
  printf("Tuesday");
    break;
    case 4:
  printf("Wednesday");
    break;
    case 5:
  printf("Thrusday");
    break;
    case 6:
  printf("Friday");
    break;
    case 7:
  printf("Saturday");
    break;
  default:
  printf("day entered is incorrect");
    break;
  }
  // printf("Day calculation complete");
}