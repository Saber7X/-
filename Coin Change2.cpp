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
	for (int i = 0; i < 5; i ++ ) //Ӳ������ 
	{
		for (int j = 1; j <= 100; j ++ ) //Ӳ������ 
		{
			for (int k = w[i]; k <= 250; k ++ ) //��Ϊ�۸����ɵ͵��ߵ������ģ�����Ҫ����д������f[0]  = 1,ת�ƹ����� 
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

