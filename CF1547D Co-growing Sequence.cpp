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
		int a[n + 10] ;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		cout << 0 << " ";
		for (int i = 2; i <= n; i ++ )
		{
			int x = (a[i] | a[i - 1]) - a[i];
			a[i] ^= x;
			cout << x << " ";
		}
//		cout << endl;
//		for (int i = 1; i <= n; i ++ ) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
