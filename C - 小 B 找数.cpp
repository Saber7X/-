#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100];
int b[100];
signed main()
{
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i ++ ) 
	{
		a[s1[i] - '0'] = 1;
	}
	for (int i = 0; i < s2.length(); i ++ ) 
	{
		b[s2[i] - '0'] = 1;
	}
	bool f = 0;
	for (int i = 0; i <= 9; i ++ )
	{
		if (a[i] != 0 && b[i] != 0) 
		{
			f = 1;
			cout << i << " ";
		}
	}
	if (!f) cout << -1;
	return 0;
}
