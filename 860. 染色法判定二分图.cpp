#include<bits/stdc++.h>
using namespace std;
const int N = 100010, M = 200010;
int h[N], e[M], ne[M], idx;
int colour[N];
void add(int a, int b)
{
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx;
	idx ++;
}
int n, m;
bool dfs(int u, int c)
{
	colour[u] = c;
	
	for(int i = h[u]; i != -1; i = ne[i] )
	{
		int j = e[i];
		if(!colour[j])
		{
			if(!dfs(j, 3 - c)) return false;
		}
		else if (colour[j] == c )
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	while (m -- )
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	bool flag = true;
	for(int i = 1; i <= n; i ++ )
	{
		if(!colour[i])//该点没有被染过色
		{
			if(!dfs(i, 1)) 
			{
				cout << "No" << endl;
				return 0;
			}
		} 
	}
	cout << "Yes" << endl;
	return 0;
}

