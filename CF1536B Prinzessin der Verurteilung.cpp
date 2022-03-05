#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
string p = "abcdefghijklmnopqrstuvwxyz";
struct cmp{
	bool operator()(const string &a, const string &b)
	{
		if(a.size() < b.size() )
		{
			return 1;
		}
		else
		{
			return a < b;
		}
	}
};
int main()
{
	int T; cin >> T;
	while(T -- )
	{	
		int n; string s; cin >> n >> s;
		int ok = 0; string ans;
		queue<string> q;
		for(int i = 0; i < 26; i ++ )
		{
			string ns = string(1, p[i]);
			q.push(ns);
			if(s.find(ns) == string::npos)
			{
				ok = 1; ans = ns;
				break;
			}
		}
		while(q.size() && ok == 0)
		{
			string t = q.front(); q.pop();
			if(t.size() == 26) break;
			for(int i = 0; i < 26; i ++ )
			{
				string ns = t + string(1, p[i]);
				q.push(ns);
				if(s.find(ns) == string::npos)
				{
					ok = 1;
					ans = ns;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
