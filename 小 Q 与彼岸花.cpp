#include<bits/stdc++.h>
using  namespace std;
int yunsuan(int a, int b)
{
	int cun1[1000]={0};
	int cun2[1000]={0};
	int ans[1000]={0};
	int cnt=0;
	int  i=0;
	while(a>0)
	{
		cun1[i++]=a%10;
		a/=10;
	}
	int j=0;
	while(b>0)
	{
		cun2[j++]=a%10;
		b/=10;
	}
	int maxn=max(i,j);
	for(i=0;i<maxn;i++)
	{
		if(cun1[i]!=cun2[i])
		{
			ans[i]=0;
		}
		else
		{
			ans[i]=1;
		}
	}
	for(i=0;i<b)
	return cnt;
}
int main()
{
	long long int num[100];
	
	int n,m;
	cin>>n>>m;//n朵花,m个问题 
	for(int i=0;i<n;i++)
	{
		long long int num1[100]={0};
		int x;
		cin>>x;
		int sum=0;
		int cnt=0;
		
		while(x>0)
		{
			num1[cnt]=x%2;
			x/=2;
			cnt++;
		}
		for(int j=cnt-1;j>=0;j--)
		{
			sum=sum*10+num1[j];
			//cout<<num1[j];
		}
		num[i]=sum;
		//cout<<sum;
		//cout<<num[i];
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}*/
	int s,k;
	while(m--)
	{
		int maxn=-1111;
		cin>>s>>k;
		if(s==k)
		{
			cout<<"0"<<endl;
			continue;
		}
		for(int i=s-1;i<k;i++)
		{
			for(int j=i+1;j<k;j++)
			{
				maxn=max(maxn,yunsuan(num[i],num[j]));
			}
		}
		int sum1=0;
		int jinwei=1;
		//cout<<maxn<<endl;
		/*while(maxn>0)
		{
			int f=maxn%10;
			sum1=sum1+f*jinwei;
			jinwei*=2;
			maxn/=10;
		}*/
		cout<<maxn<<endl;
	}
	return 0;
}
