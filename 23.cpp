#include<bits/stdc++.h> 
#define int long long
using namespace std;

int n, m; 
const int N = 1e4 + 10;
int a[N];
int ans = 0;
bool flag;
bool st[N];

struct name{
	int c;
	int p[N];
	int v[N];
}numm[N]; 

struct zanshi{
	int point;
	int value;
}num[N]; 

bool cmp(zanshi a, zanshi b)
{
	return a.value < b.value;
}

void dfs(int u, int sum, int maxn)
{
	if (sum >= m)
	{
		flag = true;
		ans = min(ans, maxn);
	}
	st[u] = true;
	for (int i = 1; i <= numm[u].c; i ++ )
	{
		if (!st[numm[u].p[i]])
		{
			dfs(numm[u].p[i], sum + numm[u].v[i], max(maxn, numm[u].v[i]));
		}
	}
}

signed main()
{
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);

	for (int i = 1; i <= n; i ++ )//n个食堂 
	{
		cin >> numm[i].c;//输入每个食堂有几个联通的食堂 
		for (int j = 1; j <= numm[i].c; j ++ )//输入每个食堂联通的食堂是哪几个 
		{
			cin >> num[j].point;//输入 
			num[j].value = a[num[j].point];//在暂存的每个食堂的分量赋值 
		}
		sort(num + 1, num + 1 + numm[i].c, cmp);//在暂存中把 
		
		for (int j = 1; j <= numm[i].c; j ++ )
		{
			numm[i].p[j] = num[j].point;
			numm[i].v[j] = num[j].value;
		}
	}	
	ans = 9999999999;
	dfs(1, a[1], 0);
	
	if (flag) cout << ans << endl;
	else cout << "-1" << endl;
	return 0;
}
/*
5 3
1 2 3 4 5
1 2
1 3
1 4
1 5
0
*/
