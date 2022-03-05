#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		string s;
		cin >> s;
		
		bool f = 0;//0¶Ô£¬1´í
		
		 
		map<char, int> ma;
		for (int i = 0; i < s.length(); i ++ )
		{
			ma[s[i]] ++;
			
			if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T')
			{
				f = 1;
				break;
			}
			
			if (ma[s[i]] > 1 && s[i] != 'A')
			{
				f = 1;
				break;
			}
		}
		
		if (f == 1 || ma['A'] == 0 || ma['P'] == 0 || ma['T'] == 0) 
		{
//			cout << 1;
			cout << "NO" << endl;
			continue;
		}
		
		int a = 0, b = 0, c = 0;
		int d = 0;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (d == 0 && s[i] == 'A') a ++;
			else if (d == 1 && s[i] == 'A') b ++;
			else if (d == 2 && s[i] == 'A') c ++;
			
			if (s[i] == 'P' || s[i] == 'T') d ++;
		}
		
//		cout <<"abc     " << a << " " << b << " " << c<< endl;
		
		int y = 0;
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == 'P') 
			{
				if (y != 0) 
				{
					f = 1;
					break;
				}
				break;
			}
			if (s[i] == 'T') y = 1;
		}
		
		if (f == 1)
		{
//			cout << 2;
			cout << "NO" << endl;
			continue;
		}
		
		if (b == 1 && a == c) cout << "YES" << endl;
		else if (b > 1 && c == a + a * (b - 1)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
} 

//#include <iostream>
//#include <map>
//using namespace std;
//int main() 
//{
//	int n, p = 0, t = 0;
//	string s;
//	
//	cin >> n;
//	for(int i = 0; i < n; i++) 
//	{
//		cin >> s;
//		map<char, int> m;
//		for(int j = 0; j < s.size(); j++) 
//		{
//			m[s[j]]++;
//			
//			if (s[j] == 'P') p = j;
//			
//			if (s[j] == 'T') t = j;
//		}
//		//  P             A                 T           
//		if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && t-p != 1 && p * (t-p-1) == s.length()-t-1)
//		{
//			printf("YES\n");
//		}
//		else 
//		{
//			printf("NO\n");
//		}
//	}
// return 0;
//}
