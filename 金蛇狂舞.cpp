#include<bits/stdc++.h>
using namespace std;

int x, yy;

int bfs()
{
	unordered_map<int, int> m;
	queue<int> q;
	q.push(x);
	m[x] = 0;
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		if (m[t] > 7) break;
		if (t == yy)
		{
			return m[t];
		}
		int d = m[t];
		double x = sqrt((double)t);
		
		int y = ceil(x);
		if (!m.count(y))
		{
			m[y] = d + 1;
			q.push(y);
			if (y == yy)
			{
				return m[y];
			}
		}
		
		y = floor(x);
		if (!m.count(y))
		{
			m[y] = d + 1;
			q.push(y);
			if (y == yy)
			{
				return m[y];
			}
		}
		
		int j = 1;
		for (int i = 1; i <= t; i ++ )
		{
			j *= i;
		}
		if (!m.count(j))
		{
			m[j] = d + 1;
			q.push(j);
			if (j == yy)
			{
				return m[j];
			}
		}
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> x >> yy;
		cout << bfs() << endl;
	}
	return 0;
}
