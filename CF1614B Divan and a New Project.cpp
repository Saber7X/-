#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
struct name{
	int a; //´ÎÊı
	int flag;//Î»ÖÃ 
}num[N];

bool cmp(name a, name b)
{
	return a.a > b.a;
}

signed main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i].a;
			num[i].flag = i;
		}
		sort(num + 1, num + 1 + n, cmp);
		int cnt = 1;
		int ans[N];
		int sum = 0;
		for (int i = 1; i <= n; i ++ )
		{
			sum += (abs(cnt) * num[i].a);
			ans[num[i].flag] = cnt;
			
			if (cnt < 0)
			{
				cnt *= -1;
				cnt ++;
			}
			else
			{
				cnt *= -1;
			}
		}
		cout << sum * 2 << endl;
		cout << 0 << " ";
		for (int i = 1; i <= n; i ++ ) cout << ans[i] << " ";
		cout << endl;
		
		
	}
	return 0;
}
