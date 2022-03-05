#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	double flag=19.0;
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
		long long int n;
		cin>>n;
		double sum;
		sum=n/8*1.0*flag+res[n%8];
		cout<<(int)sum<<" ";
		//long long int c=(int)sqrt(sum);
		if(sqrt(sum)==(int)sqrt(sum))
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
