#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i<=1200;i++)
	{
		int x=i;
		int sum=0;
		while(x>0)
		{
			sum=sum+x%10;
			x/=10;
		}
		if(sum%4==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
