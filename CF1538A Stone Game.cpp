#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int num[n + 5] = {0};
		
		int a = 0, maxn = 0, b = 99999999, minn = 99999999;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i];
			if (num[i] > a) a = num[i], maxn = i;
			if (num[i] < b) b = num[i], minn = i;
		}
		if(minn > maxn) swap(minn, maxn);
		cout << min(n - minn + 1, min(maxn, minn + n - maxn + 1)) << endl;
	}
	return 0;
}
