#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int sum=1;
	for(int i=1;i<=1000;i++)
	{
		sum*=2;
		cout<<sum<<" ";
	}
	
	/*long long int sum2=0;
	while(sum>0)
	{
		sum2+=sum%10;
		sum/=10;
	}
	cout<<sum2;*/
	return 0;
}
