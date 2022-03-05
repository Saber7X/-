#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int>v;
	for (int i = 0; i <= 9; i ++ )
	{
		cin >> n;
		for (int j = 1; j <= n; j ++ ) v.push_back(i);
	}
	sort(v.begin(), v.end());
	int f;
	for (int i = 0; i < v.size(); i ++ )
	{
		if (v[i] != 0) 
		{
			f = i;
			cout << v[i];
			break;
		}
	}
	for (int i = 0; i < v.size(); i ++ )
	{
		if (f == i) continue;
		cout << v[i];
	}
	return 0;
}
