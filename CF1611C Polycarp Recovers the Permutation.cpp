#include<bits/stdc++.h> 
using namespace std;
const int N = 200005;
int a[N];

int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int maxn = 0;
		int f = 0;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
			if (a[i] > maxn)
			{
				maxn = a[i];
				f = i;
			}
		}
		if (f != 1 && f != n)
		{
			cout << "-1" << endl;
			continue;
		}
		else
		{
			for (int i = n; i >= 1; i -- ) cout << a[i] << " ";
			cout << endl;
		}
	}
	return 0;
}
