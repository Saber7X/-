#include<bits/stdc++.h>
using namespace std;
int n, t, k;
int main()
{
	cin >> n >> t >> k;
	while (k -- )
	{
		int sum = 0;
		string s; cin >> s;
		if (s[0] == 'f') sum -= 2;
		if (s[s.length() - 1] == 'a') sum -= 1;
		int a = 0; //连续相同的
		int b = 0; //连续上升的
		for (int i = 0; i < s.length(); i ++ ) 
		{
			if (s[i] == 'a' && (s[i + 1] == 'e' || s[i + 1] == 'h'))
			{
				sum -= 4;
			}
			if (s[i] != s[i - 1]) a = 1;
			else a ++;
			
			if (s[i] != s[i - 1] + 1) b = 1;
			else b ++;
			
			if (a == 6) sum += 3;
			if (b == 4) sum += 5;
		}
		cout << sum;
		if (sum > t) cout << "!!!";
		if (k != 0)
		{
			cout << endl;
		}
	}
	return 0;
}
