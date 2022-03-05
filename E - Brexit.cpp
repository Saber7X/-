#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
vector<int> g[N * 2];
bool st[N * 2]; 
//n个国家，m个关系，我的祖国编号，第一个离开的编号 
int n, m, x, l;
int d[N * 2];
int dd[N * 2];

int bfs()
{
	queue<int> q;
	q.push(l);
	st[l] = 1;
	
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		
		if (t == x) return -1;
		for (int i = 0; i < g[t].size(); i ++ )
		{
			int j = g[t][i];
			if(st[j]) continue;
			
			d[j] --;
			if (d[j] * 2 <= dd[j] && !st[j])
			{
				q.push(j);
				st[j] = 1;
			}
		}
		
	}
	return 1;
}

int main()
{
	
	cin >> n >> m >> x >> l;
	
	for (int i = 1; i <= m; i ++ ) 
	{
		int a, b;
		cin >> a >> b;
		d[a] ++;
		d[b] ++;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	memcpy(dd, d, sizeof d);
	if (x == l)
	{
		cout << "leave" << endl;
		return 0;
	}
	int ans = bfs() ;
	
	if (ans == -1) cout << "leave" << endl;
	else cout << "stay" << endl;
	return 0;
}


/*
4 3 4 1 
2 3
2 4
1 2

stay
*/

/*
5 5 1 1 
3 4
1 2
2 3
1 3
2 5

leave
*/

/*

4 5 3 1
1 2
1 3
2 3
2 4
3 4 

stay
*/

/*
10 14 1 10
1 2
1 3
1 4
2 5 
3 5
4 5
5 6
5 7
5 8
5 9
6 10
7 10
8 10
9 10

leave
*/
