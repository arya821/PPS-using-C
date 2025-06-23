#include<stdio.h>
 int main()
 {
  int num;
  printf("Enter the number\t");
  scanf("%d",&num);
  switch (num)
  {
   case1: 
   printf("Monday");
   break;
   
   case2:
   printf("Tuesday");
   break;
   
   case3:
   printf("Wednesday");
   break;
   
   case4:
   printf("Thrusday");
   break;
   
   case5:
   printf("Friday");
   break;
   
   case6:
   printf("sarurday");
   break;
   
   case7:
   printf("sunday");
   break;
   
   default:
   printf(" Incorrect");
  }
  return 0;
 }