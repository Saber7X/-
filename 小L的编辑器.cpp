#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	char b[10000];
	char c[10000];
	char d[10000];
	gets(a);
	gets(b);
	long long int i,j,k=0,l=0;
	long long int t=0,x=0;
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(b[i]=='L')
		{
			
			c[k]=a[i];
			k++;
		}
		else if(b[i]=='R')
		{
			d[l]=a[i];
			l++;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%c",d[i]);
	}
	for(i=k-1;i>=0;i--)
	{
		printf("%c",c[i]);
	}
	return 0;
}
