#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int a[N];
signed main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	if (n == 1)
	{
		
		cout << n << " " << n << endl;
		cout << -a[1] << endl;
		
		cout << n << " " << n << endl;
		cout << 0 << endl;
		
		cout << n << " " << n << endl;
		cout << 0 << endl;
		return 0;
	}
	cout << 1 << " " << n - 1 << endl;
	for (int i = 1; i <= n - 1; i ++ )
	{
		int x = a[i];
		a[i] = a[i] * n;
		cout << a[i] - x << " ";
	}
	cout << endl;
	cout << n << " " << n << endl;
	cout << -a[n] << endl;
	cout << 1 << " " << n << endl;
	for (int i = 1; i < n; i ++ )
	{
		cout << -a[i] << " ";
	}
	cout << 0;
	return 0;
}
