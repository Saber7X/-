#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s[0] == '-') cout << "-";
	string a = "";
	int cnt1 = 0;//С����ǰ�м�λ 
	int cnt2 = 0;//С������м�λ 
	bool f = 0;//�ж���û��. 
	int i;
	for (i = 1; s[i] != 'E'; i ++ )
	{
		
		if (s[i] == '.')
		{
			f = 1;
			continue;
		}
		a += s[i];
		if (!f) cnt1 ++;
		else cnt2 ++; 
	}
	int x = 0;//���м���0 
	for (int j = i + 2; j < s.length(); j ++ )
	{
		x = x * 10 + (s[j] - '0');
	}
	if (s[i + 1] == '+')
	{
		if (x - cnt2 == 0) cout << a;
		else if (x - cnt2 > 0)
		{
			cout << a;
			for (int i = 1; i <= x - cnt2; i ++ ) cout << 0;
		}
		else
		{
			for (int i = 0; i < cnt1; i ++ )
			{
				cout << a[i];
			}
			for (int i = cnt1; i <= cnt1 + (cnt2 - x); i ++ )
			{
				cout << a[i];
			}
			cout << ".";
			for (int i = cnt1 + (cnt2 - x) + 1; i < a.length() ; i ++ ) cout << a[i];
		}
	}
	else
	{
		if (x == 0)
		{
			cout << a;
		}
		else if (x == cnt1)
		{
			cout << "0.";
			cout << a;
		}
		else if (x > 1)
		{
			cout << "0.";
			for (int i = 1; i <= x - 1; i ++ ) cout << 0;
			cout << a;
		}
	}
	return 0;
}
