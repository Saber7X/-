#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int num[N];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i];
		}
		if (n % 2 == 0) cout << "YES" << endl;
		else
		{
			bool f = 0;
			for (int i = 1; i <= n - 1; i ++ )
			{
				if (num[i] >= num[i + 1]) 
				{
					f = 1;
					cout << "YES" << endl;
					break;
				}
			}
			if (!f) cout << "NO" << endl;
		}
	}
	return 0;
}
