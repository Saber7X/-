#include<bits/stdc++.h> 
using namespace std;
int n;
int ans = 1;

void dfs(int u)
{
	if (u > n) return;
	dfs(u + 1);
	ans *= u;
	//(return)
}

int main()
{
	cin >> n;
	dfs(1);
	
	cout << ans << endl;
	return 0;
}
