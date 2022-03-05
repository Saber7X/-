#include<bits/stdc++.h>
using namespace std;
int n;
char s[3] = {'a', 'b', 'c'};

char ans[1000];

void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; i ++ )
		{
			cout << ans[i];
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < 3; i ++ )
	{
		ans[u] = s[i];
		dfs(u + 1);
	}
}

int main()
{
	cin >> n;
	dfs(0);
	return 0;
}
