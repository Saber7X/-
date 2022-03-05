#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	int n;
	scanf("%d",&n);
	int cnt=0;
	int ans[105];
	for(int j=0;j<n;j++)
	{
		int m;
		int num[105];
		scanf("%d",&m);
		int s=1;
		int x;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&x);
			s=lcm(s,x);
		}
		printf("%d",s);
		if(j!=n-1)
		{
			printf("\n");
		}
		
		
	}
	
		
	return 0;
}
