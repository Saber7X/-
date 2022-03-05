/*
¿Óµã 


#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);

	long long int cnt=0;
	long long int maxn=n;
	for(long long int i=1;i<=n;i++)
	{	long long int num=i;
		while(num>1)
		{
			if(num%2==0)
			{
				num/=2;
			}
			else if(num%2!=0)
			{
				num=num*3+1;
			}
			maxn=max(maxn,num);
			//cout<<num[cnt-1]<<endl;
		}
	 } 
	
	//sort(num,num+cnt);
	cout<<maxn;
	return 0;
}

