#include<bits/stdc++.h>
using namespace std;   
long long int a[1000005]={0},b[1000005]={0};
int main()
{
	long long int cnt=0,cnt1=0;
	long long int x,n;
	long long int i,j;
	long long int max,min;
	scanf("%lld",&x);
	for(i=0;i<x;i++)
	{
		scanf("%lld",&n);
		if(n>=0)
		{
			a[n]++;//���±��¼���֣������ֵ��¼���ִ��� 
		}
		else
		{
			int c=abs(n);
			b[c]++;
		}
	}
	
	for(i=0;i<=1000005;i++)//�ҳ���������ִ������� 
	{
		
		if(a[i]>cnt)
		{
			max=i;
			cnt=a[i];
		}
		
	}
	for(j=1000005;j>0;j--)//�ҳ���������ִ������� 
	{
		
		if(b[j]>cnt1)
		{
			min=j;
			cnt1=b[j];
		}
	}
	if(cnt1>=cnt)//�����������ִ���һ���ͳ��ִ��������Ǹ��������
	{
		printf("%lld",-min); 
	 } 
	else
	{
		printf("%lld",max);
	}
	return 0;
}
