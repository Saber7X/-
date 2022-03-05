#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000000];
	char b[10000000];
	char c[10000000];
	char d[10000000];
	gets(a);
	gets(b);
	long long int i,j,k=0,l=0;
	
	j=strlen(a);
	long long int e=j-1;
	for(i=0;i<j;i++)
	{
		if(b[i]=='L')
		{
			
			c[e]=a[i];
			e--;
		}
		else if(b[i]=='R')
		{
			c[l]=a[i];
			l++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
