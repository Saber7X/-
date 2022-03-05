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
		int a[n + 10] = {0};
		int b[n + 10] = {0};
		for (int i = 1; i <= n; i ++ ) 
		{
			int x;
			cin >> x;
			a[i] = a[i - 1] + x;
		}
		for (int i = 1; i <= n; i ++ ) 
		{
			int x;
			cin >> x;
			b[i] = b[i - 1] + x;
		}
		int ans = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ )
		{
			ans = min (ans, max(a[n] - a[i], b[i - 1]));//B一定会取可以取的最大值，但是A肯定不会让B取到最大值，最终会让B取到所有最大值里的最小值 
		}
		cout << ans << endl; 
	}
	return 0;
}
