#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#define int long long
using namespace std;

const int N = 5e3 + 10;

int w[5] = {1, 5, 10, 25, 50};
int f[251][251];
int ans[300];

signed main()
{
	f[0][0] = 1;
	for (int i = 0; i < 5; i ++ ) //硬币种类 
	{
		for (int j = 1; j <= 100; j ++ ) //硬币总数 
		{
			for (int k = w[i]; k <= 250; k ++ ) //因为价格是由低到高递增来的，所以要正着写，是由f[0]  = 1,转移过来的 
			{
				f[j][k] += f[j - 1][k - w[i]]; 
			}
		}
	}
	
	for (int i = 0; i <= 250; i ++ )
	{
		for (int j = 0; j <= 100; j ++ )
		{
			ans[i] += f[j][i];
		}
	}
	  
	int n; 
	while (scanf("%lld", &n) != EOF)
	{
		cout << ans[n] << endl;
	}
	
	
	return 0;
}

