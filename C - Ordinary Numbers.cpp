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
		long long int x=a;
		int cnt=0;//个数 
		
		if(a>=1&&a<=9)
		{
			cout<<a<<endl;
		}
		else
		{
			//int res=0;//一就是 %11==0，
			int sum=1;
			int sum1=1;
			int z=0;
			int c=a%10;
			while(x>0)
			{
				z=x;
				x/=10;
				//sum=sum*10+1; 
				sum1*=10;
				cnt+=9;
				
			}
			 //cout<<z<<endl;
			//sum/=10;
			a=a-(sum1*z);
			//a/=sum;
			a=a/11;
			cout<<cnt+a<<endl;
			
		}
		
		
	}
	return 0;
}
