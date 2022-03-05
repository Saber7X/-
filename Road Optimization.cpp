#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, l, k; cin >> n >> l >> k;
	vector<int> pos;
	vector<int> v;
	int a[n + 10];
	
	int x;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	a[n + 1] = l;
	for (int i = 2; i <= n + 1; i ++ )
	{
		pos.push_back(a[i] - a[i - 1]);
	}
	for (int i = 1; i <= n; i ++ )
	{
		cin >> x;
		v.push_back(x);
	}
	int sum = 0;
	for (int i = 0; i < n; i ++ )
	{
		sum = sum + pos[i] * v[i];
	}
	int minn = sum, f = 0;
	for (int i = 1; i <= k; i ++ )
	{
		int minnn = 0x3f3f3f3f;
		int summ = 0;
		int f;
		for (int j = 1; j < v.size(); j ++ )
		{
			summ = minn - v[j] * pos[j] + v[j - 1] * pos[j];
			if (summ < minnn)
			{
				minnn = summ;
				f = j;
			}
		}
		if (minnn < minn)
		{
			v.erase(v.begin() + f);
			pos[f - 1] += pos[f];
			pos.erase(pos.begin() + f);
			minn = minnn;
		}
	}
	cout << minn;
	return 0;
}
//1000000000
//1000000000
