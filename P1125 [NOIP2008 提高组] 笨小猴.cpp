#include<bits/stdc++.h>
using  namespace std;
bool isprime(int x)
{
	if (x == 1 || x == 0) return false;
	if (x == 2) return true;
	
	for (int i = 2; i <= sqrt(x); i ++ )
	{
		if (x % i == 0)  return false;
	}
	return true;
}
int main()
{
	string s;
	int maxn = 0, minn = 0x3f3f3f3f;
	cin >> s;
	map<int, int> m;
	for (int i= 0; i < s.length(); i ++ )
	{
		m[s[i]] ++;
		
	}
	for (int i= 0; i < s.length(); i ++ )
	{
		maxn = max(m[s[i]], maxn);
		minn = min(m[s[i]], minn);
	}
	
	int ans = maxn - minn;
	if (isprime(ans))
	{
		cout << "Lucky Word" << endl;
		cout << ans << endl;
	}
	else
	{
		cout << "No Answer" << endl;
		cout << 0 << endl;
	}
	return 0;
}
