#include<stdio.h>
#define int long long
//using namespace std;
signed main()
{
	int n; scanf("%lld", &n);
	int num[n + 10];
	int sum1[n + 10]={0};
	int sum2[n + 10]={0};
	
	int sumn = 0;
	for (int i = 1; i <= n; i ++ ) 
	{
		scanf("%lld", &num[i]);
		sum1[i] = sum1[i - 1] + num[i];
		sumn += num[i];
	}
	int flag;
	if (sumn % 7 == 0) 
	{
		printf("%lld\n", n);
		return 0;
	}
	else
	{
		flag = sumn % 7;
	}
	
	int ans = 0;
	for (int i = n; i >= 1; i -- )
	{
		sum2[n - i + 1] = sum2[n - i + 1 - 1] + num[i];
	}
	bool f = 0;
	
	int g[n + 2][2];
	g[0][1] = sumn, g[0][2] = sumn;
	
	for (int i = 1; i <= n - 1; i ++ )
	{
		g[i][1] = g[i - 1][1] - sum
	}
	
	if (!f) printf("0\n") ;
	
	return 0;
}
