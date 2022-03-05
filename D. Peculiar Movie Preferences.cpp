////#include<bits/stdc++.h>
////using namespace std;
////
////bool f = 0;
////bool check(string s)
////{
////    for (int i = 0; i <s.length(); i ++)
////    {
////        if (s[i] != s[s.length() - i - 1]) return false;
////    }
////    return true;
////}
////
////bool st[100005];
////
//////void dfs(int u, string s)
//////{
//////	
//////	if (u == s.size())
//////	{
//////		return;
//////	}
//////	
//////	for (int i = u; i < s.size(); i ++ )
//////	{
//////		cout << s[i] << endl;
//////	}
//////	
//////}
////
////int main()
////{
////	int t; cin >> t;
////	while (t -- )
////	{
////		int n;
////		scanf("%d", &n);
////		vector<string> s;
////		f = 0;
////		for (int i = 1; i <= n; i ++ )
////		{
////			string se; 
////			cin >> se;
////			
////			if (se.length() == 1) f = 1;
////			else 
////			{
////				s.push_back(se);
////			} 
////		}
////		
////		if (f) cout << "YES" << endl;
////		else
////		{
////			for (int i = 0; i < s.size(); i ++ )
////			{
////				for (int j = i + 1; j < s.size(); j ++ )
////				{
////					if (check(s[i] + s[j]))
////					{
////						f = 1;
////						break;
////					}
////				}
////				if (f) break;
////			}
////			if (f)cout << "YES" << endl;
////			else cout << "NO" << endl;
////		}
////		
////	}
////	return 0;
////}
//
//#include<bits/stdc++.h>
//using namespace std;
//
//bool f = 0;
////void dfs(int u, string s)
////{
////	
////	if (u == s.size())
////	{
////		return;
////	}
////	
////	for (int i = u; i < s.size(); i ++ )
////	{
////		cout << s[i] << endl;
////	}
////	
////}
//bool check(string s)
//{
//    for (int i = 0; i <s.length(); i ++)
//    {
//        if (s[i] != s[s.length() - i - 1]) return false;
//    }
//    return true;
//}
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		int n;
//		scanf("%d", &n);
//		unordered_map<string, int >s;
//		f = 0;
//		
//		for (int i = 1; i <= n; i ++ )
//		{
//			string se; 
//			cin >> se;
//			
//			if (!f)
//			{
//				if (check(se) ) f = 1;
//				else if (se.length() == 1) f = 1;
//				else 
//				{
//					string a = se;
//					reverse(a.begin(), a.end());
//					
//					if ( s[a]) f = 1;
//					a.pop_back();
//					
//					if ( s[a]) f = 1;
//					s[se] = 1;
//				} 
//			}
//			
//		}
//		
//		if (f) cout << "YES" << endl;
//		else cout << "NO" << endl;
//		
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
bool f = 0;
unordered_map <string, int> ma;

void dfs(int u, string s)
{
	
}


int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n; 
		cin >> n;
		
	}
	return 0;
}
