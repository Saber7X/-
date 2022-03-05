#include<bits/stdc++.h> 
using namespace std;
int a[10000];


int main()
{
	int n; cin >> n;
	
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	int sum = 0;
	for (int i = 1; i <= n; i ++ )
	{
		int minn = a[i], pos = i;
		for (int j = i + 1; j <= n; j ++ )
		{
			if (minn > a[j])
			{
				minn = a[j];
				pos = j;
			}
			
		}
		if (a[i] > a[pos])
		{
			swap(a[i], a[pos]);
			sum ++;
		}
	}
	cout << sum << endl;
	return 0;
}
