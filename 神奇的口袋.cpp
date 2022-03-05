#include<bits/stdc++.h>
using namespace std;
int f(int n,int a[100])
{
	int c;
	if(c==0)
	{
		return 1;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			c=40-a[i];
			return f(40-a[i]);
		}
		
	}
	

	
	
	
}
int main()
{
	
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{
		int a[100]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d",f(n,a));
		
	}
	
	return 0;
 } 
