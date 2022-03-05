#include<bits/stdc++.h>
#define int long long
using namespace std;

int _10to_10(string s)
{
	reverse(s.begin(), s.end());
	int sum = 0;
	int cnt = 1;
	for (int i = 0; i < s.length(); i ++ )
	{
		sum = sum + (s[i] - '0') * cnt;
		cnt *= 10;
	}
	return sum;
}

int _2to_10(string s)
{
	reverse(s.begin(), s.end());
	int sum = 0;
	int cnt = 1;
	for (int i = 0; i < s.length(); i ++ )
	{
		if (s[i] != '0' && s[i] != '1') return -1;
		sum = sum + (s[i] - '0') * cnt;
		cnt *= 2;
	}
	return sum;
}

string _10to_2(int x)
{
	string ss="";
	int ans[100];
	int cnt = 0;
	while (x > 0)
	{
		ss +=  (x % 2 + '0');
		x /= 2;
	}
	reverse(ss.begin(), ss.end());
	return ss;
}

signed main()
{
	int n; cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int aa, bb;
		string a, b;
		cin >> a >> b;
		aa = _2to_10(a);
		if (aa == -1) aa = _10to_10(a);
		
		bb = _2to_10(b);
		if (bb == -1) bb = _10to_10(b);
		
		sum += aa * bb;
		
	}
	string xx = _10to_2(sum);
	int flag = 0;
	string bbb="";
	for (int i = 0; i < xx.length(); i ++ )
	{
		if (xx[i] == '1') 
		{
			flag = i;
			break;
		}
	}
	for (int i = flag; i < xx.length(); i ++ )
	{
		bbb += xx[i];
	}
	cout << bbb << endl<< sum;
	return 0;
} 
