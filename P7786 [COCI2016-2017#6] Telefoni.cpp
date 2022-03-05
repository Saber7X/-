#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans = 0;
	int n, d; cin >> n >> d;
	int num[n + 10];
	for (int i = 1; i <= n; i ++ ) cin >> num[i];
	if (num[n] == 0) ans ++;
	num[n] = 1;
	int cnt = 0;
	for (int i = n; i >= 1; i -- )
	{
		if (num[i] == 0) cnt ++;
		if (num[i] == 1) cnt = 0;
		if (cnt == d && num[i] == 0)
		{
//			cout << i << "     ";
			cnt = 0;
			ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
