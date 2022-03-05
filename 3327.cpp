#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, ans; cin >> n >> m;
	for (int i = 1; i <= 1000000000; i ++ )
	{
		if (m * i > n)
		{
			ans = i - 1;
			break;
		}
	}
	cout << ans << endl;
	return 0; 
}
