#include<bits/stdc++.h>
using namespace std;
int ans[2000050];

int f(int x, int p)
{
	int v = 1;
	if (ans[x] != -1)
	{
		return ans[x];
	}
	if (x == 1)
	{
		ans[x] = v;
		return v;
	}
	else
	{
		v += f(p % x, p);
		ans[x] = v;
		return ans[x];
	}
	
}

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int sum = 0;
		memset(ans, -1, sizeof ans);
		for (int i = 1; i <= n - 1; i ++ )
		{
			sum += f(i, n);
		}
		printf("%.10f\n", (double)sum / (double)(n - 1));
	}
	return 0;
}
