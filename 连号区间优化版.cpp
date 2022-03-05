/*详情图片可参考u盘xxh，算法，题目图片*/ 
/*该做法会超时，但可以拿到80%的分*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int cnt=0;
	scanf("%d",&n);
	int num[10001];
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=1;i<=n;i++)//从1开始找 
	{
		int maxn=-1e8;
			int minn=1e8;
		
		for(int j=i;j<=n;j++)//从i开始遍历范围 
		{
			minn=min(minn,num[j]);//该做法较上一个做法少写了一个for循环，其实都一样 
			maxn=max(maxn,num[j]);
			if(maxn-minn==j-i)
			{
				cnt++;
			}
		}
	}
	cout<<cnt; 
	return 0;
}
