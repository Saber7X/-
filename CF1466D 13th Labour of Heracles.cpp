#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 4e5 + 10;
int T, n;
int du[N], w[N];
struct name{
	int w;
	int flag;
}num[N];
bool cmp(name a, name b)
{
	return a.w > b.w;
}
signed main()
{
	cin >> T;
	while (T -- )
	{
		int ans = 0;
		cin >> n;
		map<int, int> res;
		for(int i = 1; i <= n; i ++ )
		{
			cin >> num[i].w;
			ans += num[i].w;
			num[i].flag = 0;
		}
		for(int i = 1; i <= n - 1; i ++ )
		{
			int a, b;
			cin >> a >> b;
			num[a].flag ++;
			num[b].flag ++;
		}
		sort(num + 1, num + 1 + n, cmp);
		int now = 1;
		cout << ans <<" ";
		for(int i = 1; i <= n; i ++ )
		{
			for(int j = 1; j < num[i].flag; j ++ )
			{
				ans += num[i].w;
				cout << ans << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
