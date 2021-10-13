/*

Sample Input:

3 3

1

Sample Output:

1 2 3

4 5 6

7 8 9



*/


#include<stdio.h>

int main() 
{
	int r, c, n;
	scanf("%d %d %d", &r, &c, &n);
	int a[r][c];
	for(int i = 0; i < r; i++)
	{
	    for(int j = 0; j < c; j++)
	    {
	        a[i][j]=n++;
		 printf("%d ", a[i][j]);
		 
	    }
	    	printf("\n");
	}
    return 0;
}