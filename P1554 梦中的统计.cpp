#include<bits/stdc++.h>
using namespace std;

int Hash[12];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = n; i <= m; i ++ )
	{
		int x = i;
		while (x > 0)
		{
			Hash[x % 10] ++;
			x /= 10;
		}
	}
	for (int i = 0; i <= 9; i ++ )
	{
		cout << Hash[i] << " ";
	}
	return 0;
}
