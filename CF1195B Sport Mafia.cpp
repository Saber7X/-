#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long int a,b,cnt=0,sum=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		sum+=i;
		if(sum-(a-i)==b)
		{
			cout<<a-i;
			break;	
		}
	}
	return 0;
}
