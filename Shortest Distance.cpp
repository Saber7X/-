#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int dis[100001];
	scanf("%d",&n);
	
		int sum=0;
		int num[100001]={0};
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&num[i]); 
			sum+=num[i];
			dis[i]=sum;
		}
		int m;
		int a,b;
		scanf("%d",&m);
		while(m--)
		{
			int sum1=0;
			scanf("%d %d",&a,&b);
			if(b<a)//�����ᳬʱ����Ϊ�ǻ���·�����Կ��Լ��㷴������·�̣��ٽ��бȽϣ�һ���� 
			{
				swap(a,b); 
				/*
				for(int i=a;i<=n;i++)
				{
					sum1+=num[i];
				}
				for(int i=0;i<b;i++)
				{
					sum1+=num[i];
				}*/
			}
			//����ÿ��·�̵ľ��룬Ȼ��ֱ���ó��ļ�ȥ�̵ĵõ�·�̣�Ȼ������ֵ�����С�� 
			printf("%d\n",min(dis[b-1]-dis[a-1],sum-(dis[b-1]-dis[a-1])));
				/*for(int i=a;i<b;i++)
				{
					sum1+=num[i];
				}
			
			int sum2=sum-sum1;//���㷴�߾���
			if(sum2>sum1)
			{
				printf("%d\n",sum1);
			}
			else
			{
				printf("%d\n",sum2);
			}
			//printf("%d\n",min(c,sum1)) ;*/
			
			
		}
	
	return 0;
}
