#include<bits/stdc++.h> 
using namespace std;

bool prime(int x)
{
	if(x==0)
	{
		return 1;
	}
	if(x==1)
	{
		return 1;
	}
	if(x==2)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 1;
		}
		
	}
	return 0;
}
int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		if(prime(x)==0)
		{
			cout<<"������"<<endl ;
		}
		if(prime(x)==1)
		{
			cout<<"��������"<<endl ;
		}
		
	}
	return 0;
}
