#include<stdio.h>
int main()
{
	char str[100];
  	int ascii[26]={},i,max=0,max_char;
  	scanf("%[^\n]s",str);
  	for(i=0;str[i]!='\0';i++)
    {
      	if(str[i]>=97 && str[i]<=122)
          str[i]=str[i]-32;
      	if(str[i]!=' ')
        {
          	ascii[str[i]-65]++;
        }
    }
  	for(i=0;i<26;i++)
    {
      	if(ascii[i]>max)
        {
          max=ascii[i];
          max_char=i+65;
        }
    }
	printf("Maximum occurring character is '%c' = %d times.", max_char,max);
}