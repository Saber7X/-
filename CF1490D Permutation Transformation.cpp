#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N], ans[N];
bool st[N];
void dfs(int l, int r, int deep)
{
	if(l > r) return;
	int maxn = 0, flag;
	for(int i = l; i <= r; i ++ )
	{
		if(a[i] > maxn) 
		{
			maxn = a[i];
			flag = i;
		}
	}
	ans[flag] = deep;
	dfs(l, flag - 1, deep + 1);
	dfs(flag + 1, r, deep + 1);
}
int main()
{
	int T ;
	cin >> T;
	while (T --)
	{
		int n;
		cin >> n;
		for(int i = 1; i <= n; i ++ )
		{
			scanf("%d",a+i);
		}
		dfs(1, n, 0);
		for(int i = 1; i <= n; i ++ )
		{
			cout << ans[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
