#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2000005; 
signed main() 
{
	int n, num[N] = {0}, f[N];
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> num[i];
		f[i] = max(num[i], num[i] + f[i - 1]);
	}
	cout << f[n];
	return 0;
}
