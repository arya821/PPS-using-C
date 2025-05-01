#include<stdio.h>
 int main ()
 { 
 int c,d;
 printf("Enter the value of c\t");
 scanf("%d",&c);
 printf("Enter the value of d\t");
 scanf("%d",&d);
 
 printf("Before interchanging c is %d\n",c);
 printf("Before interchanging d is % d\n",d);
 
 c=c+d;
 d=c-d;
 c=c-d;
 
 printf("After interchanging c is%d\n",c);
 printf("After interchanging d is %d\n",d);
 return 0;
 }
 
 
  
  


  
  
  

    