#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 10];
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	int sum = 0;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i; j <= n; j ++ )
		{
			if (a[i] > a[j]) 
			{
				swap(a[i], a[j]);
				sum ++;
			}
		}
	}
	for (int i = 1; i <= n; i ++) cout << a[i] << " ";
	cout << sum << endl;
	return 0;
}
