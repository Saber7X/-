#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
		int f[n + 10] = {0};
		for (int i = 1; i <= m; i ++ )
		{
			int a, b, c;
			cin >> a >> b >> c;
			f[b] = 1;
		}
		int flag = 0;
		for (int i= 1; i <= n; i ++ )
		{
			if (f[i] == 0)
			{
				flag = i;
				break;
			}
		}
		for (int i = 1; i <= n; i ++ )
		{
			if (i != flag)
			{
				cout << i << " " << flag << endl;
			}
		}
	}
	return 0;
}
