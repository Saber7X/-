#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<int, int> num;
	for (int i = 1; i <= n - 1; i ++ )
	{
		int a, b; cin >> a >> b;
		num[a] ++;
		num[b] ++;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (num[i] == n - 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
