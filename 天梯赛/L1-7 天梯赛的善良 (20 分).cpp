#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int num[20001]={0};
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int maxn=0;
	int minn=0;
	for(int i=0;i<n;i++)
	{
		if(num[0]==num[1])
		{
			if(num[i]==num[i+1])
			{
				minn++;
			}
			else
			{
				minn++;
				break;
			}
			
		}
		else
		{
			minn++;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(num[n-1]==num[n-2])
		{
			if(num[i]==num[i-1])
			{
				maxn++;
			}
			else
			{
				maxn++;
				break;
			}
			
		}
		else
		{
			maxn++;
			break;
		}
	}
	printf("%d %d\n%d %d",num[0],minn,num[n-1],maxn);
	return 0;
 } 
