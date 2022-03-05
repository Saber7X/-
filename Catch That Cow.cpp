#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <math.h>
#define int long long
using  namespace std;
const int N = 1e5;

int d[100007];
int n, k;

void bfs()
{
	memset(d, -1, sizeof d);
	queue<int> q;
	d[n] = 0;
	q.push(n);
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		if (t == k) break;
		
		int a = t + 1, b = t - 1, c = t * 2;
		if (a >= 0 && a <= N && d[a] == -1)
		{
			d[a] = d[t] + 1;
			q.push(a);
		}
		if (b >= 0 && b <= N && d[b] == -1)
		{
			d[b] = d[t] + 1;
			q.push(b);
		}
		if (c >= 0 && c <= N && d[c] == -1)
		{
			d[c] = d[t] + 1;
			q.push(c);
		}
	}
}

signed main()
{
	while (cin >> n >> k)
	{
		bfs();
		cout << d[k] << endl;
	}
	
	return 0;
}
