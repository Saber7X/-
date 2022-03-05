#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int a[n + 10];
		for (int i = 1; i <= n; i ++ ) cin >> a[i];
		if (n % 2 != 0)
		{
			if (a[1] + a[2] != 0) cout << a[3] << " " << a[3] << " " << -(a[1] + a[2]) << " ";
			else if (a[2] + a[3] != 0) cout << -(a[2] + a[3]) << " " << a[1] << " " << a[1] << " ";
			else if (a[1] + a[3] != 0) cout << a[2] << " " << -(a[1] + a[3]) << " " << a[2] << " ";
			for (int i = 4; i <= n; i += 2)
			{
				cout << a[i + 1] << " " << -a[i] << " ";
			}
		}
		else
		{
			for (int i = 1; i <= n; i += 2)
			{
				cout << a[i + 1] << " " << -a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
