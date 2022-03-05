#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
int f[N];
typedef pair<int, int> PII;
PII q[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++ ) cin >> q[i].first >> q[i].second;
	sort(q + 1, q + n + 1);
	int ans = 0;
	for(int i = 1; i <= n; i ++ )
	{
		f[i] = 1;
		for(int j = 1; j < i; j ++ )
		{
			if(q[i].second > q[j].second ) f[i] = max(f[i], f[j] + 1);
			ans = max(ans, f[i]);
		}
	}
	cout << ans << endl;
	return 0;
}
