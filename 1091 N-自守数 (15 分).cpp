#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		int k;
		cin >> k;
		int sum = k * k;
		int kk = k;
		int cnt = 0;
		
		while (kk > 0)
		{
			kk /= 10;
			cnt ++;
		}
		bool res = 0;
		string f = to_string(k);
		for (int j = 1; j <= 10; j ++ )
		{
			int a = sum * j;
			string s = to_string(a);
			string flag = s.substr(s.length() - cnt, cnt);
			if (f == flag)
			{
				res = 1;
				cout << j << " " << s;
				break;
			}
		}
		if (!res) cout << "No";
		if (i != n) cout << endl;
	}
	return 0;
}
