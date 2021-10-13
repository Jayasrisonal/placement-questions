/*
Input (stdin)
5

Output (stdout)
120
*/

#include<stdio.h>
int main()
{
	long int n,f=1;
	scanf("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	
	}
	printf("%ld",f);
	return 0;
}