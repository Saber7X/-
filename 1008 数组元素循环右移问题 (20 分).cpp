#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int n, k; cin >> n >> k;
	
//	int b[n + 10];
	k %= n;
	for (int i  = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for (int i = n - k + 1; i <= n; i ++ )
	{
		
		cout << a[i] << " ";
	}
	for (int i = 1; i <= n - k; i ++ )
	{
		
		cout << a[i];
		if (i != n - k) cout << " ";
	}
	return 0;
}

