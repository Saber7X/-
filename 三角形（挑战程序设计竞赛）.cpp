#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 10];
	
	for (int i= 1;i <= n; i ++ )
	{
		cin >> a[i];
	}
	int sfp = 0;
	for (int i = 1; i <= n; i ++ )
	{
		
		for (int j = 1; j <= n; j ++ )
		{
			for (int k = 1; k <= n; k ++ )
			{
				if (k != j && i != j && i != k)
				{
					if (a[i] + a[j] > a[k] && abs(a[i] - a[j]) < a[k])
					{
						sfp = max (sfp, a[i] + a[j] + a[k]);
					}
				}
			}
		}
	}
	cout << sfp << endl;
	return 0;
}
