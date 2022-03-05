#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t, n;
	cin >> t;
	while (t --)
	{
		int num[200005]={0}, ans, cnt = 0;
		cin >> n;
		for(int i = 1; i <= n; i ++)
		{
			cin >> num[i];
		}
		ans = num[1];
		for(int i = 2; i <= n; i ++)
		{
			ans = ans & num[i];
		}
		for(int i = 1; i <= n; i ++)
		{
			if(num[i] == ans)
			{
				cnt ++;
			}
		}
		int sum = 0;
		
		sum = cnt * (cnt - 1);
		int ll = 1;
		for(int i = 1; i <= n - 2; i ++)
		{
			sum *= i;
			sum %= 10000000007;
		}
		cout << sum << endl;
	}
	return 0;
}
