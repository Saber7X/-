#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	int sum1,sum2,sum3;
	
	sum1=n/a1*b1;
	if(n%a1!=0)
	{
		sum1+=b1;
	}
	sum2=n/a2*b2;
	if(n%a2!=0)
	{
		sum2+=b2;
	}
	sum3=n/a3*b3;
	if(n%a3!=0)
	{
		sum3+=b3;
	}
	cout<<min(sum1,min(sum2,sum3));
	return 0;
}
