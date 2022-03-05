#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int sum1=0;
	long long int sum2=0;
	for(int i=1;i<=100;i++)
	{
		sum2+=i;
		sum1+=i*i;
	}
	sum2*=sum2;
	cout<<sum2-sum1;
	
	return 0;
}
//25164150
