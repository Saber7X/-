#include<bits/stdc++.h>
using namespace std;
/*0的情况要特判*/
bool isprime(int x)
{
	if (x == 1 || x == 0) return false;
	for (int i = 2; i <= sqrt(x); i ++ )
	{
		if (x % i == 0) return false;
	}
	return true;
}

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	bool f = 0;
	for (int i = 0; i < s.length() - k + 1; i ++ )
	{
		string a = s.substr(i, k);
		int ans = 0;
		int cnt = 1;
		for (int j = a.length() - 1; j >= 0; j -- )
		{
			ans = ans + (a[j] - '0') * cnt;
			cnt *= 10;
		}
		if (isprime(ans))
		{
			f = 1;
			cout << a;
			break;
		}
	}
	if (!f) cout << 404;
	return 0;
}
