#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int n,m;//n�����Լ����m����С������ 
	scanf("%lld %lld",&n,&m);
	long long int c=n*m;//Ҫ����������Ļ� 
	long long int d=sqrt(c)+1;//�����ſ�ʼ�� 
	long long int a=0,b=0;//a,b������Ҫ��������� 
	//printf("%d",d);
	//long long int ans[10001];
	//long long int cnt=0;
	bool t=0;//�ж��������Ƿ���� 
	while(1)//��ѭ����ʼ�ж� 
	{
		if(c%d==0)//��������������ҵ��˷��ϲ���������a��b 
		{
			long long int e=c/d;//�ҵ���һ���� 
			if(gcd(e,d)==n&&lcm(e,d)==m)//�ж��Ƿ�������Լ������С������ 
			{
				printf("%lld",e+d);
				return 0;
			}
		}
		d--;
		if(d==0)
		{
			t=1;
			return 0;
		} 
	}
	
	return 0;
}

