#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int h[n + 10], k[n + 10];
		for (int i = 1; i <= n; i ++ ) cin >> k[i];
		for (int i = 1; i <= n; i ++ ) cin >> h[i];
		int ln = h[1];
		int sum = (1 + h[1]) * h[1] / 2;
//		cout << sum << endl;
		for (int i = 2; i <= n; i ++ )
		{
//			cout << sum << endl;
			if (k[i] - k[i - 1] >= h[i]) 
			{
				sum += ((1 + h[i]) * h[i] / 2);
				ln = h[i];
			}
			else
			{
//				cout << "111111" << endl;
//				cout << ln << endl;
//				cout << ln + 1 << " " << ln + k[i] - k[i - 1] << " " << k[i] - k[i - 1];
				sum += ((ln + 1 + (ln + k[i] - k[i - 1])) * (k[i] - k[i - 1]) / 2);
				
				ln = ln + k[i] - k[i - 1];
//				cout << "::  " << sum << " "<< ln <<"  "<< endl;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
/*
3
1
6
4
2
4 5
2 2
3
5 7 9
2 1 2


10
6
7
*/

/*
100
5
1 2 3 4 5
1 2 3 4 5

15
*/

/*

100
5
2 4 6 8 10
1 2 3 3 2

25
*/


