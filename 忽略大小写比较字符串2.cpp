#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int i,j,k;
	int cnt=0,sun=0;
	int t,s;
	char a[10086],b[10086];
	gets(a);
	gets(b);
	
	n=strlen(a);
	m=strlen(b);
	
	for(i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=tolower(b[i]);
	}
	if(n>m)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]>b[i])
			{
				printf(">");
				break;
			}
			else if(a[i]<b[i])
			{
				printf("<");
				break;
			}
			else if(a[i]==b[i]&&i==m-1)
			{
				printf(">");
			}
		}
	}
	if(n<m)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
			{
				printf(">");
				break;
			}
			else if(a[i]<b[i])
			{
				printf("<");
				break;
			}
			else if(a[i]==b[i]&&i==n-1)
			{
				printf(">");
			}
		}
	}
	if(n==m)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
			{
				printf(">");
				break;
			}
			else if(a[i]<b[i])
			{
				printf("<");
				break;
			}
			else if(a[i]==b[i]&&i==n-1)
			{
				printf("=");
			}
		}
	}
	return 0;
}
