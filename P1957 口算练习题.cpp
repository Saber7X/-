//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	for (int i = 1; i <= n; i ++ )
//	{
//		string s;
//		getline(cin, s);
//		int a = 0, b = 0;
//		if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c')
//		{
//			bool f = 0;
//			for (int j = 2; j < s.length(); j ++ )
//			{
//				if (s[j] == ' ') 
//				{
//					f = 1;
//					continue;
//				}
//				if (!f)
//				{
//					a = a * 10 + (s[j] - '0');
//				}
//				if (f)
//				{
//					b = b * 10 + (s[j] - '0');
//				}
//			}
//			cout << a;
//			if (s[0] == 'a') cout << "+";
//			if (s[0] == 'b') cout << "-";
//			if (s[0] == 'c') cout << "*";
//			cout << b << "=";
//			int ans;
//			if (s[0] == 'a') ans = a + b;
//			if (s[0] == 'b') ans = a - b;
//			if (s[0] == 'c') ans = a * b;
//			cout << ans << endl;
//			int cnt = 2;
//			while (a > 0)
//			{
//				a /= 10;
//				cnt ++;
//			}
//			while (b > 0)
//			{
//				b /= 10;
//				cnt ++;
//			}
//			while (ans > 0)
//			{
//				ans /= 10;
//				cnt ++;
//			}
//			cout << cnt;
//		}
//		else
//		{
//			bool f = 0;
//			for (int j = 0; j < s.length(); j ++ )
//			{
//				if (s[j] == ' ') 
//				{
//					f = 1;
//					continue;
//				}
//				if (!f)
//				{
//					a = a * 10 + (s[j] - '0');
//				}
//				if (f)
//				{
//					b = b * 10 + (s[j] - '0');
//				}
//			}
//			cout << a;
//			cout << "+";
//			cout << b << "=";
//			int ans;
//			ans = a + b;
//			cout << ans << endl;
//			int cnt = 2;
//			while (a > 0)
//			{
//				a /= 10;
//				cnt ++;
//			}
//			while (b > 0)
//			{
//				b /= 10;
//				cnt ++;
//			}
//			while (ans > 0)
//			{
//				ans /= 10;
//				cnt ++;
//			}
//			cout << cnt;
////			
//		}
//		if (i!=n) cout << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 50;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		
	}
	return 0;
}
