/*����ͼƬ�ɲο�u��xxh���㷨����ĿͼƬ*/ 
/*�������ᳬʱ���������õ�80%�ķ�*/ 
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
	for(int i=1;i<=n;i++)//��1��ʼ�� 
	{
		int maxn=-1e8;
			int minn=1e8;
		
		for(int j=i;j<=n;j++)//��i��ʼ������Χ 
		{
			minn=min(minn,num[j]);//����������һ��������д��һ��forѭ������ʵ��һ�� 
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
