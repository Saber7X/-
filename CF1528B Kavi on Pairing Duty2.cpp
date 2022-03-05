#include<bits/stdc++.h> 
using namespace std;
const int N = 2e6 + 10, mod = 998244353;
int f[N], v[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for(int j = i; j <= n; j += i)
		{
			v[i] ++;
		}
	}
	f[1] = 1;
	int sum = f[1];
	
	for(int i = 2; i <= n; i ++ )
	{
		f[i] = sum + f[i];
		f[i] %= mod;
		
		sum += f[i];
		sum %= mod;
	}
	
	cout << f[n] << endl;
	return 0;
}
