#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	int flag=19;
	double res[10]={0.0};
	res[0]=0.0;
	res[1]=2.0;
	res[2]=2.0;
	res[3]=4.0;
	res[4]=5.0;
	res[5]=5.0;
	res[6]=11.0;
	res[7]=11.0;
	res[8]=19.0;
	while(t--)
	{
		int n;
		cin>>n;
		double sum=443650000.0;
		sum=n/8*flag+res[n%8];
		cout<<sum<<" ";
		long long int ll=(int)sqrt(sum);
		if(ll*ll==(int)sum)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
