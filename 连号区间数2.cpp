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
		for(int j=i;j<=n;j++)//从i开始遍历范围 
		{
			int maxn=-1e8;
			int minn=1e8;
			for(int k=i;k<=j;k++)//范围为i到j，因为要找连续区间，所以在范围内排好序后找最大值和最小值，用最大值减去最小值，如果是连续区间即可得到区间内数量的个数，那么再用它们是第几个数的那个下标（序号）相减，这个的结果一定是两数之间的数量，用这个值和j-i比较，如果相等说明是连号区间，所以cnt++; 
			{
				minn=min(minn,num[k]);
				maxn=max(maxn,num[k]);
			}
			if(maxn-minn==j-i)
			{
				cnt++;
			}
		}
	}
	cout<<cnt; 
	return 0;
}
