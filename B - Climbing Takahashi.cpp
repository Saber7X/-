#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 10];
	
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	int maxn = a[1];
	for (int i = 2; i <= n; i ++ )
	{
		if (a[i] > maxn) 
		{
			maxn = a[i];
		}
		else
		{
		    break;
		}
	}
	cout << maxn;
	return 0;
}
