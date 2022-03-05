//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, d; cin >> n >> d;
//	string s; cin >> s;
//	int x = 0;//记录步数
//	int cnt = 0;//记录上一个1在哪里
//	bool f = 0; 
//	bool flag = 0;
//	int ans = 0;//记录最终答案 
//	if (s[0] != '1' || s[n - 1] != '1') 
//	{
//		cout << "-1" << endl;
//		return 0;
//	}
//	for (int i = 1; i < s.length(); i ++ )
//	{
//		
//		if (s[i] == '1')
//		{
//			cnt = i;
//		}
//		x ++;
//		if (x == d)
//		{
//			
//			if (i - cnt >= d)//超过范围 
//			{
//				flag = 1;
//				break;
//			}
//			else
//			{
//				ans ++;
//				x = i - cnt;
//			}
//			
//			
//		}
//		if (i > s.length() - d - 1 && s[s.length() - 1] == '1' && s.length() - 1 - i + x <= d)
//		{
//			ans ++;
//			break;
//		}
//	}
//	if (flag == 0 ) cout << ans << endl;
//	else cout << "-1" << endl;
//	return 0;
//}
////10001010101000100101
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, d;string s;
	cin >> n >> d >> s;
	int len = s.length();
	if (s[0] == '0' || s[len - 1] == '0') cout << -1;
	else
	{
		int ans = 0;
		int x = 0;
		int cnt = 0;
		bool flag = 0;
		for (int i = 1; i < len; i ++ )
		{
			x ++;
			if (x == d)
			{
				if (s[i] == '1') 
				{
					ans ++;
					cnt = i;
					x = 0;
				}
				else
				{
					bool tt = 0;
					for (int j = i; j > i - d; j -- )
					{
						if (s[j] == '1')
						{
							cnt = j;
							i = j;
							x = 0;
							tt = 1;
							ans ++;
							break;
						}
					}
					if (tt == 0)
					{
						flag = 1;
						break;
					}
				}
			}
		}
		if (flag == 1) cout << -1 << endl;
		else
		{
			if (cnt != len - 1)
			{
				ans ++;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
