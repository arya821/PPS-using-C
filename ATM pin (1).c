#include<stdio.h>
 int main()
 {
  int pin ,i,correct_pin = 5678;
  printf("pin must be correct");
  for(i=1; i<=3 ; i++)
  
  {
   printf ("\n Enter your ATM pin:");
   scanf("%d",&pin);
   }
   
   if(pin== correct_pin)
  {
    printf("\n collect your cash");
    'break';
  }
  else if (i==3)
  {
   printf(" ATM has been blocked after 24 hours\n");
  }
  else 
  {
   printf("Incorrect pin plz again\n");
  }
  return 0;
 }