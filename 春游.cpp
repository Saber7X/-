#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		long long int n,a,b;
		cin>>n>>a>>b;
		long long int x=a/2;
		long long int y=b/3;
		long long int sum=0;
		long long int flag;//���������˴� 
		long long int t=0;
		if(x>=y)//������˴��ķ��ô������˴� 
		{
			sum=sum+n/3*b;//�;���������˴� 
			if(n%3!=0)//
			{
				
				if(a<b)
				{
					sum+=a;
				}
				else if(a>=b)
				{
					sum+=b;
				}
			}
			
		}
		else
		{
			sum=sum+n/2*a;
			if(n%2!=0)
			{
				if(a<b)
				{
					sum+=a;
				}
				if(a>=b)
				{
					sum+=b;
				}
			}
			
		}
		cout<<sum;
		if(k!=t)
		{
			cout<<endl;
		}
		
	}
	return 0;
}
