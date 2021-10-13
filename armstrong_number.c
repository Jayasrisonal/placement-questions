/*
Input (stdin)
1634

Output (stdout)
ARMSTRONG

*/

#include <stdio.h>
#include <math.h>
int main()
{
  	int n,copy,sum=0,digit=0,rem;
  	scanf("%d",&n);
  	copy=n;
  	while(n!=0)
    {
      	digit++;
      	n=n/10;
    }
  	n=copy;
  	while(n!=0)
    {
      	rem=n%10;
      	sum = sum + pow(rem,digit);
      	n=n/10;
    }
    if(sum==copy)
        printf("ARMSTRONG");
    else
        printf("NOT AN ARMSTRONG");

    return 0;
}