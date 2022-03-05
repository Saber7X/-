#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int a[n + 10];
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		if (a[1] == 1)
		{
			cout << n + 1 << " ";
			for (int i = 1; i <= n; i ++ ) 
			{
				cout << i << " ";
			}
			cout << endl;
			continue;
		}
		if (a[n] == 0)
		{
			for (int i = 1; i <= n; i ++ ) 
			{
				cout << i << " ";
			}
			cout << n + 1 << " ";
			cout << endl;
			continue;
		}
		bool f = 0;
		for (int i = 1; i <= n; i ++ )
		{
			cout << i << " ";
			if (a[i] == 0 && a[i + 1] == 1 && f == 0)
			{
				cout << n + 1 << " ";
				f = 1;
			}
		}
		cout << endl;
	}
	return 0;
}
