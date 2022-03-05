#include<bits/stdc++.h>
using namespace std;
char flag;
struct name
{
	string s;
	int len;
}num[1005];

int n; 
int st[1005];
int ans = 0;

int check(string a, string b)
{
	int aans = -1;
	int lena = a.length(), lenb = b.length();
	int minn = min(lena, lenb);
	
	for (int i = 1; i < minn; i ++ )
	{
		
		string x = a.substr(lena - i, lena);
		string y = b.substr(0, i);
		
		if (x == y)
		{
//			cout << x <<" " <<  y << endl;
			aans = i;
			break;
		}
	}
	return aans;
}

void dfs(int u, int sum)
{
	for (int i = 1; i <= n; i ++ )
	{
		if (st[i] < 2)
		{
			
			if (u == 0 && num[i].s[0] == flag)
			{	
				st[i] ++ ;
				ans = max(ans, sum + num[i].len);
				dfs(i, sum + num[i].len);
				st[i] -- ;
			}
			else 
			{
				string a = num[u].s, b = num[i].s;
				int an = check(a, b);
				if (an != -1 && an != a.length() && an != b.length())
				{
//					cout << i << endl;
					st[i] ++ ;
					ans = max(ans, sum + num[i].len - an);
					dfs(i, sum + num[i].len - an);
					st[i] -- ;
				}
			}
		}
	}
	return;
}
int main()
{
	cin >> n;
//	getchar();
	for (int i = 1; i <= n; i ++ )
	{
		string ss;
		cin >> ss;
		num[i].s = ss;
		num[i].len = num[i].s.length();
	}
	cin >> flag;
	dfs(0, 0);
	
	cout << ans << endl;
	return 0;
}
//atoucheatactactouchoose
