#include<bits/stdc++.h>
using namespace std;
bool st[100005];
int main()
{
	int n, m;
	cin >> n >> m;
	int a[m + 20];
	
	for (int i = 1; i <= m; i ++ )
	{
		cin >> a[i];
	}
	queue<int> q;
	int cnt = 0, ans = 0;
	for (int i = 1; i <= m; i ++ )
	{
		if (!st[a[i]])
		{
			if (cnt < n)
			{
				q.push(a[i]);
				cnt ++;
			}
			else
			{
				st[q.front()] = 0;
				q.front() = a[i];
			}
			ans ++;
			st[a[i]] = 1;
		}
	}
	cout << ans << endl;
	return 0;
}
