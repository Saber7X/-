//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 2e5 + 10;
//int a[N];
//int b[N];
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		memset(b, 0, N);
//		int n; cin >> n;
//		int sum = 0; 
//		for (int i = 1; i <= n; i ++ )
//		{
//			cin >> a[i];
//			sum += a[i];
//		}
//		if (sum % n != 0 ) cout << "0" << endl;
//		else
//		{
//			int ans = 0;
//			sum /= n;
//			for (int i = 1; i <= n; i ++ )
//			{ 
//				if (a[i] == 1) b[sum - 1] ++;
//				else b[sum % a[i]] ++;
//				
//			}
//			if (b[0] > 1) ans = ans + (b[0] * (b[0] - 1)) / 2;
//			for (int i = 1; i <= sum / 2; i ++ )
//			{
//				ans += (b[i] * b[sum - i]);
//			}
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		map<int, int> num;
		int sum = 0;
		int n; cin >> n;
		for (int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
			num[a[i]] ++;
			sum += a[i];
		}
		int ans = 0;
		if (2 * sum % n != 0)
		{
			cout << 0 << endl;
			continue;
		}
		int k = sum * 2 / n;
		num[k] --;
		for (int i = 1; i <= n; i ++ )
		{
			ans = ans + num[k * 2 - a[i]];
			num[a[i]] --;
		}
		cout << ans << endl;
	}
	return 0;
}
