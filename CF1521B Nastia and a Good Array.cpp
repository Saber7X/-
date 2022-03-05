#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int minn = 0x3f3f3f3f;
		int pos = -1;
		int n; cin >> n;
		int num[n + 5];
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i];
			if (num[i] < minn)
			{
				minn = num[i];
				pos = i;
			}
		}
		cout << n - 1 <<  endl;
		for (int i = 1; i <= n; i ++ )
		{
			if (i == pos) continue;
			if (abs(pos - i) % 2 != 0) printf("%d %d %d %d\n", i, pos, minn + 1, minn);
			else printf("%d %d %d %d\n", i, pos, minn, minn);
		}
	}
	return 0;
}
