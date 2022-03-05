#include<bits/stdc++.h>
using namespace std;
const int N = 200010;
int a[N];
int main()
{
	int t;
	cin >> t;
	while(t -- )
	{
		int n, ans;
		cin >> n;
		cin >> ans;
		int cnt = 0;
		for(int i = 1; i < n; i ++ )
		{
			int x; cin >> x;
			if(x == 1) cnt ++ ;
			else
			{
				ans += (cnt / 3);
				cnt = 0;
			}  
		}
		if(cnt != 0)
		{
			ans += (cnt / 3);
		}
		cout << ans << endl;
	}
	return 0;
}
