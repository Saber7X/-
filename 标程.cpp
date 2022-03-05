#include<bits/stdc++.h>
using namespace std;
const int N = 2005;
int main()
{
	int n, m;
	char s[N];
	int f[N][N] ;
	memset(f, 0, sizeof f);
	cin >> n >> m;
	scanf("%s", s + 1);
	for(int len = 2; len <= n ; len ++ )
	{
		for(int i = 0; i + len - 1 <= n ; i ++ )//Ã¶¾Ù×ó¶Ëµã
		{
			
			int l = i; int r = i + len -1;
			if (len != 2) f[l][r] = f[l + 1][r - 1];
			if(s[l] != s[r] && len != 2) f[l][r] = f[l + 1][r - 1]  + 1;
			if(s[l] != s[r] && len == 2) f[l][r] = 1;
		} 
	}
	while (m -- )
	{
		int l ,r;
		cin >> l>>r;
		if(s[l] != s[r] && r - l == 1 )
		{
			cout << "1" << endl;
			continue;
		}
		cout << f[l][r] << endl;
	}
	return 0;
}
