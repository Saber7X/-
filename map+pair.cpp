#include<bits/stdc++.h> 
using namespace std;
int main()
{
	map<pair<int, int>, int> ma;
	int n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i; j <= n; j ++ )
		{
			ma[{i, j}] = i + j;
			ma[{j, i}] = i + j;
		}
	}
	while (q -- )
	{
		int a, b;
		cin >> a >> b;
		cout << ma[{a, b}] << endl;
	}
	return 0;
}
