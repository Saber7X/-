#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5 + 10;

int a[N];
int b[N];

signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		
		for (int i = 1; i <= n; i ++ )
		{
			cin >> b[i];
			if (b[i] < a[i]) swap(a[i], b[i]);
		}
		
		int maxa = 0, maxb = 0;
		
		for (int i = 1; i <= n; i ++ )
		{
			maxa = max(a[i], maxa);
			maxb = max(b[i], maxb);
		}
		cout << maxa * maxb << endl;
	}
}
