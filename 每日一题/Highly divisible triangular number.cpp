#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[200001]={0};
	long long int a=1;
	for(int i=1;i<=200000;i++)
	{
		num[i]=num[i-1]+a;
		a++;
		//cout<<num[i]<<" ";
	}
	for(int i=1;i<=200000;i++)
	{
		long long int cnt=0;
		//long long int n=sqrt(num[i]);
		for(int j=1;j<=sqrt(num[i]);j++)
		{
			if(num[i]%j==0)
			{
				cnt+=2;
			}
		}
		if(sqrt(num[i])*sqrt(num[i])==num[i])
		{
			cnt-=1;
		}
		if(cnt>=500)
		{
			cout<<num[i];
			break;
		}
	}
	
	return 0;
 } 
