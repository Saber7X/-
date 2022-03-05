#include<bits/stdc++.h> 
using namespace std;
int main()
{
	
	int n; char c;
	cin >> n >> c;
	int f = 0;
	
	for (int i = 1; i <= n + 100; i ++ )
	{
		int sum = 1 + (i + i - 1) * i / 2;
		sum = sum * 2 - 1;
		if (sum > n)
		{
			f = i - 1;
			break;
		}
	}
	int ans = n - (((1 + (f + f - 1)) * f / 2) * 2 - 1);
	int s = f + f - 1;
	int cnt = 0;
	for (int i = 1; i <= f; i ++ )
	{
		for (int j = 1; j <= cnt; j ++ ) cout << " ";
		for (int j = 1; j <= s; j ++ ) cout << c;
		cout << endl;
		cnt ++;
		s -= 2;
	}
	s = 3;
	cnt -= 2; 
	for (int i = 2; i <= f; i ++ )
	{
		for (int j = 1; j <= cnt; j ++ ) cout << " ";
		for (int j = 1; j <= s; j ++ ) cout << c;
		cout << endl;
		cnt --;
		s += 2;
	}
	cout << ans;
	return 0;
}
