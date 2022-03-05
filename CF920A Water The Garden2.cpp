#include<bits/stdc++.h> 
using namespace std;
const int N = 5000;

int n, k;
bool st[N];

struct name
{
	int l, r, cnt;
};

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n >> k;
		for (int i = 0; i <= n; i ++ ) st[i] = 0;
		queue<name> q;
		int ans = 1;
		
		for (int i = 1; i <= k; i ++ )
		{
			int x;
			cin >> x;
			st[x] = 1;
			q.push({x, x, 1});
		}
		
		while (q.empty() == 0)
		{
			name t;
			t = q.front();
			q.pop();
			
			ans = max(t.cnt, ans);
			
			int ll = t.l;
			int rr = t.r;
			int cc = t.cnt;
			if ((st[max(ll - 1, 0)] == 0 && ll > 1) || (st[rr + 1] == 0 && rr < n))
			{
				st[max(ll - 1, 0)] = 1;
				st[rr + 1] = 1;
				
				q.push({ll - 1, rr + 1, cc + 1});
			}
		}
		cout <<ans << endl;
		
	}
	return 0;
}
