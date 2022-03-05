#include<bits/stdc++.h> 
using namespace std;
int ans[110];
int main()
{
	int n;
	cin >> n;
	int a[n + 10];
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	
	
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i - 1; j >= 1; j -- )
		{
			if (a[j] < a[i])
			{
				ans[i] ++;
			}
		}
	}
	for (int i = 1; i <= n ; i ++ ) cout << ans[i] << " ";
	return 0;
}
