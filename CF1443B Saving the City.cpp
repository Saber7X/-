#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int sum[N], f[N];
char s[N];

signed main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int a, b;
		cin >> a >> b >> s + 1;
		
		int len = strlen(s + 1);
		int minn = 0;
		
		for(int i = 1; i <= len; i++) 
		{
			int add = 0;
			if(s[i] == '0')  add = 1;
			sum[i] = sum[i - 1] + add;
		}
		
		for(int i = 1; i <= len; i++ )
		{
			if(s[i] == '0') f[i] = f[i - 1];
			else f[i] = minn + sum[i] * b + a;
			minn = min(minn, f[i] - sum[i] * b);
		}
		cout << f[len] << endl;
	}
	return 0;
}
