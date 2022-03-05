#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 10];
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int maxn = 0;
	for (int i = 1; i < n; i ++ )
	{
		maxn = (maxn, a[i + 1] - a[i]);
	}
	cout << maxn << endl;
	return 0;
}
