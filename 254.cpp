#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;


int a[50005];
int dp[50005];

int main()
{
	a[0] = 0;
	a[1] = 1;
	int cnt = 2;
	while(a[cnt] <= (int)1e12)
	{
		a[cnt++] = a[cnt - 1] * 3;
	}
	
	a[cnt] = 6;cnt ++;
	while(a[cnt] <= (int)1e12)
	{
		a[cnt ++] = a[cnt - 1] * 6;
	}
	
  	int n,m,w,v,t;
  	scanf("%d",&t);

  	while(t--)
  	{
  		int x;
		scanf("%d",&x);
		memset(dp,-1,sizeof(dp));
		dp[0]=0;//Ҫ�ǵø���ֵ��������������Ϊ0ʱ����װ��������ֵΪ0
  		for(int i=1;i<=cnt;i++)
  		{	
			for(int j = a[i]; j <= x; j++)//j�ĳ�ֵ��w��ʼ��j++�Ļ��������dp[j]������dp[j-1]���� ������Ϊ-1�� 
	  		{//��������ȫ������Ʒ���޸������ص� 
	  			if(dp[j - a[i]] == -1) continue;//���ܸպ�װ�� 
	  			dp[j] = dp[j] > dp[j - w] + v ? dp[j] : dp[j - a[i]] + a[i];
			}	
		}
	  	if(dp[m] == -1) printf("NO\n");
	  	else printf("%d\n",dp[m]);
	}
  	return 0;
} 
