#include<bits/stdc++.h>
using namespace std;
bool biaoji[60000]={0};
int prime[60000]={0};
int cnt=0;

void findprime()
{
	cnt=1;
	for(int i=2;i<=60000;i++)
	{
		if(biaoji[i]==0)
		{
			prime[cnt++]=i;
			//printf("%d\n",i);
			for(int j=i*i;j<=60000;j+=i)
			{
				biaoji[j]=1;
			}
		}
		
	}
} 
int main()
{
	findprime();
	int n=cnt;
	cnt=0;
	
	for(int i=1;i<=n;i++)
	{
		if(prime[i+1]-prime[i]==3)
		{
			cnt++;
		}
		else
		{
			cnt=0;
		}
		if(cnt==10)
		{
			for(int j=i-10;j<=i;j++)
			{
				printf("%d ",prime[j]);
			}
			break;
		}
		if(i==n&&cnt!=10)
		{
			printf("wu");
		}
	}
	return 0;
}
