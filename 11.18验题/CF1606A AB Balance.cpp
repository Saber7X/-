//#include<bits/stdc++.h> 
//using namespace std;
//
//struct name
//{
//	int cnt;
//	int flag;
//}num[105]; 
//
//bool cmp(name a, name b)
//{
//	return a.cnt < b.cnt;
//}
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		string s; cin >> s;
//		int cc = 0;
//		for (int i = 0; i <= 101; i ++ )
//		{
//			num[i].cnt = 0;
//			num[i].flag = 0;
//		}
//		
//		for (int i = 0; i < s.length(); i ++)
//		{
//			if (s[i] != s[i + 1])
//			{
//				num[cc + 1].flag = i + 1;
//				num[cc].cnt ++ ;
//				cc ++;
//			}
//			else num[cc].cnt++;
//		}
//		cout << cc << " ";
//		if  (cc % 2 == 0)
//		{
//			sort(num, num + cc, cmp);
//			for (int i = num[0].flag; i <= num[0].flag - 1 + num[0].cnt; i ++ )
//			{
//				if (s[i] == 'a') s[i] = 'b';
//				else s[i] = 'a';
//			}
//		}
//		
//		cout << s << endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		string a; cin >> a;
		int ba = 0, ab = 0;
		for (int i = 0; i < a.length(); i ++ )
		{
			if (a[i] == 'b' && a[i + 1] == 'a')
			{
				ba ++;
			}
			if (a[i] == 'a' && a[i + 1] == 'b') ab ++;
		}
		if (ab != ba)
		{
			if (a[0] == 'a') a[0] = 'b';
			else a[0] = 'a';
		}
		cout << a << endl;
	}
	
	return 0;
}
