#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if((i%2!=0&&i%9!=0)||(i%2==0&&i%7==0)) 
		{
			continue;
		}
		int x=i;
		int cnt=0;
		while(x>0)
		{
			x/=10;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
