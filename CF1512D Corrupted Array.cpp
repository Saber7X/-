#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 2e5 + 10;

int n, k, a[N], b[N], sum[N];

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n; k = n + 2;
		for (int i = 1; i <= k; i ++ ) cin >> b[i];
		sort(b + 1, b + 1 + k);
		for (int i = 1; i <= k; i ++ ) sum[i] = sum[i - 1] + b[i];
		
		if(sum[n] == b[n + 1])
		{
			for (int i = 1; i <= n; i ++ ) cout << b[i] << " ";
			cout << endl;
		}
		else 
		{
			int flag = -1;
			for (int i = 1; i <= n + 1; i ++ )
			{
				//这样就可以实现最大值当总和，b[i] 当随机数，b[n + 1]参与到数组a里 
				if (sum[n + 1] - b[i] == b[n + 2])
				{
					flag = i;
					break;
				}
			}
			if (flag == -1) 
			{
				cout << flag << endl;
				continue;
			}
			for (int i = 1; i <= n + 1; i ++ )
			{
				if (i != flag) cout << b[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

