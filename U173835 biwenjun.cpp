#include<bits/stdc++.h> 
using namespace std;
int main()
{
	string s;
	cin >> s;
	int begin = -1, end = -1;
	for(int i = 0; i < s.length(); i ++ )
	{
		if(begin == -1 && s[i] == 'f' && s[i - 1] != 'f' && s[i + 1] != 'f') begin = i;
		if(s[i] == 'f' && s[i - 1] != 'f' && s[i + 1] != 'f') end = i;
	}
	for(int i = 0; i < s.length(); i ++ )
	{
		if (i == begin) cout << "milk";
		else if (i == end) cout << "bread";
		else if (s[i] == 'f' && s[i - 1] != 'f' && s[i + 1] != 'f') cout << "biwenjun";
		else cout << s[i] ;
	}
	return 0;
}
