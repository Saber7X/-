#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	freopen("fun.in", "r", stdin);
	freopen("fun.out","w", stdout);
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		long long int ans1;
		long long int ans2;
		long long int num[100005];
		long long int res[100005]={0};
		long long int minn=1111111;//记录数 
		long long int minm=1111111;//记录次数 
		for(long long int i=1;i<=n;i++)
		{
			cin>>num[i];
			res[num[i]]++;
		}
		for(long long int i=1;i<=n;i++)
		{
			if(res[num[i]]<minn||(res[num[i]]==minn&&num[i]<minm))
			{
				minn=res[num[i]];
				minm=num[i];
			}
		}
		//头尾
		long long int flag=min(num[1],num[n]);
		long long int cnt1=0,cnt2=0;
		num[0]=flag,num[n+1]=flag;
		for(long long int i=0;i<=n+1;i++)
		{
			if(num[i]==flag&&num[i+1]!=flag&&i!=n+1)
			{
				cnt1++;
				for(long long int j=i+1;j<=n+1;j++)
				{
					if(num[j]==flag)
					{
						i=j-1;
						break;
					}
				}
			}
		}
		//中间取最小
		if(minm!=num[1]&&minm!=num[n])
		{
			num[0]=minm;
			num[n+1]=minm;
			for(long long int i=0;i<=n+1;i++)
			{
				if(num[i]==minm&&num[i+1]!=minm&&i!=n+1)
				{
					cnt2++;
					for(long long int j=i+1;j<=n+1;j++)
					{
						if(num[j]==minm)
						{
							i=j-1;
							break;
						}
					}
				}
			}
		}
		else
		{
			cnt2=1000000;
		}
		//cout<<cnt1<<" "<<cnt2<<endl;
		if(cnt1<cnt2)
		{
		 	cout<<flag<<" "<<cnt1<<endl; 
		}
		else if(cnt1==cnt2)
		{
		 	if(minm<flag)
		 	{
		 		cout<<flag<<" "<<cnt1<<endl; 
			}
			else
			{
			 	cout<<minm<<" "<<cnt2<<endl; 
			}
		}
		else
		{
		 	cout<<minm<<" "<<cnt2<<endl;
		}
	}
	return 0;
 } 
