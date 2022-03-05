#include<bits/stdc++.h>
using namespace std;
const int N = 5e4 + 10;
int n, m;
int p[N], d[N];
int find(int x)
{
	if(p[x] != x)
	{
		int t = find(p[x]);
		d[x] += d[p[x]];
		p[x] = t;
	}
	return p[x];
}
int main()
{
	int res = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++ ) p[i] = i;
	while (m -- )
	{
		int t, x, y;
		cin >> t >> x >> y;
		if(x > n || y > n) res ++;
		else
		{
			int px = find(x), py = find(y);
			if (t == 1)
			{
				if (px == py && (d[x] - d[y]) % 3) res ++;
				else if (px != py)//如果不在一个集合中
				{
					p[px] = py;
					d[px] = d[y] - d[x];//如果应该不会影响别的值吧，这一步没太看懂 
				} 
			}
			else
			{
				if(px == py && (d[x] - d[y] - 1) % 3) res ++ ;
				else if(px != py)
				{
					p[px] = py;
					d[px] = d[y] + 1 - d[x];//使%3==1 
				}
			} 
		}
	}
	cout << res << endl; 
	return 0;
}  
