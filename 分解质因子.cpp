#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;//int�����ֵ 
int prime[maxn];//������ 
int pnum=0;//�������ڵĸ��� 
bool isprime(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void findprime()//������������ 
{
	for(int i=1;i<maxn;i++)
	{
		if(isprime(i)==0)
		{
			prime[pnum++]=i;
		}
	}
}
struct factor
{
	int x;//���� 
	int cnt;//�����ĸ��� 
}fac[10]; 
int main()
{
	findprime();//������
	int n,num=0;//numΪn�Ĳ�ͬ�����ӵĸ��� 
	scanf("%d",&n);
	if(n==1)//������� 
	{
		printf("1=1");
	}
	else
	{
		printf("%d=",n);
		int sqr=sqrt(n);//n�ĸ��ţ�Ҳ�������ӵ����Χ
		//��ʼö��sqr���ڵ������� 
		for(int i=0;i<pnum&&prime[i]<=sqr;i++)// ����С���������ܸ�������СС�ڸ���n
		{
			if(n%prime[i]==0)
			{
				fac[num].cnt=0;
				fac[num].x =prime[i];//��¼������
				while(n%prime[i]==0)
				{
					n/=prime[i];
					fac[num].cnt ++;
				 } 
				 num++;//�����ӵ�����++ 
			 } 
			if(n==1)
			{
			 	break;
			} 
		 } 
		 if(n!=1)
		 {
		 	fac[num].x =n;
		 	fac[num].cnt=1;
		 }
		 for(int i=0;i<num;i++)
		 {
		 	printf("%d",fac[i].x);
		 	if(fac[i].cnt!=1)
		 	{
		 		printf("^%d",fac[i].cnt );
			 }
		 	if(i!=num-1)
		 	{
		 		printf("*");
			 }
		 }
	 } 
	return 0;
 } 
