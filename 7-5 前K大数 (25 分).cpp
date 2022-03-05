#include<iostream>
#include<queue>
#define int long long
using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
signed main()
{
	q.push(-999999999999);
	int n, k;
	scanf("%lld%lld", &n, &k);
	for (int i = 1; i <= n; i ++ )
	{
		int x; scanf("%lld", &x);
		if (x >= q.top() || q.size() <= k)
		{
			q.push(x);
			if (q.size() > k)
			{
				q.pop();
			}
		}
	}
	if (q.top() == -999999999999) q.pop();
	vector<int> v;
	for (int i = 1; i <= min(k, n); i ++ )
	{
		v.push_back(q.top());
		q.pop();
		
	}
	for (int i = v.size() - 1; i >= 0; i -- )
	{
		printf("%lld", v[i]);
		if (i != 0) printf(" ");
	}
	return 0;
}
