#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num[50004]={0};
	int sum[50004]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		sum[i]=max(num[i],sum[i-1]);
	}
	int x;
	for(int k=1;k<=m;k++)
	{
		cin>>x;
		int mid=lower_bound(sum+1,sum+n+1,x)-sum;
		if(mid>n||mid<=1)
		{
			continue;
		}
		num[mid-1]++;
		//��Ϊ�ڵ��϶�������������ͬ���ֵ����һ������һ�����Ǳ������ĵ��Σ�
		//�����ڵ��ĸ߶�ֻ��1����������������Ӱ�����еĵ����� 
		if(num[mid-1]>sum[mid-1])
		{
			sum[mid-1]=num[mid-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<num[i];
		if(i!=n)
		{
			cout<<endl;
		}
	}
	return 0;
 } 
