#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200005;
char s[N];
int dfs(int l, int r, char c)
{
	if(l == r) return s[l] != c;
	int tot1 = 0, tot2 = 0;
	int mid = (l + r) >> 1;
	for(int i = l; i <= mid; i ++ ) 
	{
		if(s[i] != c) tot1 ++;
	}
	for (int i = mid + 1; i <= r; i ++ )
	{
		if(s[i] != c) tot2 ++;
	}
	tot1 += dfs(mid + 1, r, c + 1);
	tot2 += dfs(l, mid, c + 1);
	return min(tot1, tot2);
}
signed main()
{
	int T;
	cin >> T;
	while(T -- )
	{
		int n;
		cin >> n;
		scanf("%s", s + 1);
		cout << dfs(1, n, 'a') << endl;
	}
	return 0;
}
