#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 4;
	}
	else
	{
		return f(n-1)+f(n-2)+f(n-3);
	}
	
	
	
}
int main()
{
	
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",f(n));
	}
	
	return 0;
 } 
