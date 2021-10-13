#include<stdio.h>  
int main()    
{    
 int i,facttorial=1,num;    
 printf("Enter a number: ");    
  scanf("%d",&num);    
    for(i=1;i<=num;i++){    
      facttorial=facttorial*i;    
  }    
  printf("Factorial of %d is: %d",num,facttorial);    
return 0;  
}   
