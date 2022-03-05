#include<bits/stdc++.h> 
using namespace std;
//const i
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int f = len / 2;
	int cnt = 0;
	char ans[len  + 10];
	for (int i = 0; i < s.length() / 2; i ++ )
	{
//		ans.push_back(s[i]);
//		ans.push_back(s[i + f]);
		ans[i] = s[cnt ++ ];
		ans[i + f] = s[cnt ++ ];
//		cout << s[i] << s[i + f];
	}
	for (int i = 0; i < len; i ++ ) cout << ans[i];
	return 0;
}
