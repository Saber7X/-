#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
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
int lcm(long long int a,long long int b)
{
	return a/gcd(a,b)*b;
}
int main()
{
	long long int x,y;
	scanf("%lld %d",&x,&y);//�������Լ������С������ 
	long long int sum=x*y;//���Լ������С�������ĳ˻�Ҳ��Ҫ�ҵ����ĳ˻� 
	int a=sqrt(sum)+1;//�˻��Ķ��η������������ʼ�� 
	int cnt=0;
	//printf("%d\n",a);
	bool t=0;
	for(long long int i=a;i>0;i--)
	{
		if(sum%i==0)
		{
			int b=sum/i;
			if(gcd(i,b)==x&&lcm(i,b)==y)
			{
				cnt++;
			}
			if(i==b)
			{
				t++;
			}
		 } 
	} 
	if(t!=0)
	{
		printf("%lld",(cnt-t)*2+t);
	}
	else
	{
		printf("%lld",cnt*2);
	}
	return 0;
}
