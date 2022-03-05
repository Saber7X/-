#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e9 + 7;
int f(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	return (f(x - 1) +  f(x - 2)) % N;
}
signed main()
{
	int n;
//	cin >> n;
//	cout << f(n);
	
	for (int j = 1; j <= 1000; j ++ )
	{int sum = 0;
		for (int i = 1; i <= j; i ++ )
		{
			int x = f(i);
			sum += x * x;
			sum %= N;
		}
		cout <<j << ":::" << sum << endl;
	}
	
	return 0;
}
