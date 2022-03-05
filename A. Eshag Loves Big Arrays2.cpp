#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		map<int, int> f;
		int minn = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%d", &a[i]);
			f[a[i]] ++;
			minn = min (minn, a[i]);
		}
		cout << n - f[minn] << endl;
	}
	return 0;
}
