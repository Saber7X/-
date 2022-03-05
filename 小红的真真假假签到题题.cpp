#include<bits/stdc++.h> 
#define int long long
using namespace std;
string _10to_2(int x)
{
    string ss="";
    int ans[100];
    int cnt = 0;
    while (x > 0)
    {
            ss += (x % 2 + '0');
            x /= 2;
    }
    reverse(ss.begin(), ss.end());
    return ss;
}
int check(string s)
{
	int cnt = 0;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (s[i] == '1') cnt ++;
	}
	return cnt;
}
signed main() 
{
	int n;
	while (cin >> n)
	{
		int  cnt = 3;
		string flag = _10to_2(n);
		int x = n;
		while (1)
		{
			x = n * cnt;
			
			string a = _10to_2(x);
//			cout << flag << " " << a  << endl;
			if (a.find(flag) != -1 && check(flag) != check(a))
			{
				cout <<cnt << " ::" <<  x << endl;
				break;
			}
			if (cnt > n * 3) break;
			cnt ++;
		}
	}
	
	return 0;
}
