#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;
int a[N], f[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i ++ )
	{
		f[i] = 1;
		for (int j = 1; j < i; j ++ )
		{
			if (a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
		}
		ans = max(ans, f[i]);
	}
	cout << ans << endl;
	return 0;
}
