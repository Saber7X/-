#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t, n;
	cin >> t;
	while(t --)
	{
		int x[1001] = {0}, y[1001] = {0};
		cin >> n;
		for(int i = 1; i <= n; i ++)
		{
			cin >> x[i] >> y[i];
		}
		if(n % 2 != 0)
		{
			cout << "1" << endl;
		}
		else
		{
			sort(x + 1, x + n + 1);
			sort(y + 1, y + n + 1);
			cout << (x[n / 2 + 1] - x[n / 2] + 1) * (y[n / 2 + 1] - y[n / 2] + 1) << endl;
		}
	}
	return 0;
}
