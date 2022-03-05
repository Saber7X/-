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
			if(b<a)//这样会超时，因为是环形路，所以可以计算反过来的路程，再进行比较，一样的 
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
			//计算每段路程的距离，然后直接用长的减去短的得到路程，然后计算差值，输出小的 
			printf("%d\n",min(dis[b-1]-dis[a-1],sum-(dis[b-1]-dis[a-1])));
				/*for(int i=a;i<b;i++)
				{
					sum1+=num[i];
				}
			
			int sum2=sum-sum1;//计算反走距离
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
