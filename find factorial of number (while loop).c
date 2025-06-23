#include<stdio.h>
int main()
{
 int i, fact =1, num;
 
 printf("enter the number");
 scanf("%d",&num);
 while(i <= num)
 {
  fact = fact*i;
  i++;
 }
 
 printf("Factorial of %d is %d\n",num,fact);
 return 0;
}