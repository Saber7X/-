#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int n; cin >> n;
	int sum = 2;
	for (int i = 1; i <= n; i ++ )
	{
		sum = sum * 2 - 1;
	}
	cout << sum * sum;
	return 0;
}
