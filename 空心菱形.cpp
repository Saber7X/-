#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a=n-1;
	int b=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a;j++)
		{
			printf(" ");
		}
		a--;
		printf("*");
		for(int j=1;j<=b;j++)
		{
			printf(" ");
		}
		if(i!=0)
		{
			printf("*");
		}
		if(i==0)
		{
			b++;
		}
		else
		{
			b+=2;
		}
		
		printf("\n");
	}
	b-=4;
	a+=2;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<a;j++)
		{
			printf(" ");
		}
		a++;
		printf("*");
		for(int j=0;j<b;j++)
		{
			printf(" ");
		}
		if(i==n-2)
		{
			b-=1;
		}
		else
		{
			b-=2;
		}
		if(i!=n-2)
		{
			printf("*\n");
		}
		
	}
	return 0;
 } 
