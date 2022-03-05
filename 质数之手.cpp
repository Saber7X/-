#include<bits/stdc++.h> 
#define int long long
using namespace std;

const int N = 1e6 + 1, M = 1e4 + 5;

int n;
int ans[N], bb = 0;
int cnt = 0;
int prime[N];
bool res[N];

void findprime()
{
	for (int i = 2; i <= N; i ++ )
	{
		if (res[i] == 0)
		{
			prime[cnt ++]=i;
			for(int j = i * i; j <= N; j += i)
			{
				res[j]=1;
			}
		}
	}
}

signed main()
{
	int cntt = 0;
	cin >> n;
	
	string s = "";
	
	findprime();
	
	while (n > 0)
	{
		s += ((n % 10) + '0');
		n /= 10;
		cntt ++;
	}
	
	sort(s.begin(), s.end());
	
//	cout << s << endl;

	for (int i = 0; i < cnt; i ++ )
	{
		int cntn = 0;
		int ss = prime[i];
		string aa = "";
		while (ss > 0)
		{
			aa += ((ss % 10) + '0');
			ss /= 10;
			cntn ++;
		}
		if (cntn == cntt)
		{
			sort(aa.begin(), aa.end());
			if (aa == s)
			{
				ans[bb ++ ] = prime[i];
			}
		}
	}
	
	sort(ans, ans + bb);
	
	cout << bb<< endl;
	
	if (bb != 0) cout << ans[0];
	
	return 0;
}

