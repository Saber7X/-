#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n--)
	{
		long long int a;
		cin>>a;
		if(a<10)
		{
			cout<<a<<endl;
		}
		else
		{
			long long int cnt=-9;
			long long int x=a;
			long long int sum=1;//1000000000 
			long long int sum1=0;//111111111
			while(x>0)
			{
				f=x%10;
				x/=10;
				sum=sum*10;
				sum1=sum1*10+1;
				cnt+=9;
			}
			//cout<<f<<endl;
			/*sum=sum/10*f;
			a-=sum;
			sum1/=10;
			cnt=cnt+a/sum1;*/
			cnt+=a/sum1;
			cout<<cnt<<endl;
		}
	}
	return 0;
}	
	
