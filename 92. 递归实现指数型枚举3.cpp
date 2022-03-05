#include<bits/stdc++.h>
using namespace std;
int n;
bool st[50];

//    当前在选第几个数 
void dfs(int u)
{
	if (u > n) 
	{
		for (int i = 1; i <= n; i ++ )
		{
			if (st[i] == 1)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		return;
	}
	
	//st[u] = true;
	st[u] = 1;
	dfs(u + 1);
	
	st[u] = 0;
	dfs(u + 1);
}
int main()
{
	cin >> n;
	dfs(1);
	
	return 0;
}
