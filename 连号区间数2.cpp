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
		for(int j=i;j<=n;j++)//��i��ʼ������Χ 
		{
			int maxn=-1e8;
			int minn=1e8;
			for(int k=i;k<=j;k++)//��ΧΪi��j����ΪҪ���������䣬�����ڷ�Χ���ź���������ֵ����Сֵ�������ֵ��ȥ��Сֵ��������������伴�ɵõ������������ĸ�������ô���������ǵڼ��������Ǹ��±꣨��ţ����������Ľ��һ��������֮��������������ֵ��j-i�Ƚϣ�������˵�����������䣬����cnt++; 
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
