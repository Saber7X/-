#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, k; cin >> n >> k;
		string s; cin >> s;
		int ans = 0;
		int cnt = 0;
		int start, end;
		
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == '*')
			{
				start = i;
				s[i] = 'x';
				ans ++;
				break;
			}
		}
		for (int i = s.length() - 1; i >= 0; i -- )
		{
			if (s[i] == '*')
			{
				end = i;
				s[i] = 'x';
				ans ++;
				break;
			}
		}
		//cout << ans << endl;
		
		if(ans < 2)
		{
			cout << ans << endl;
			continue;
		}
		
		int last;
		for (int i = start; i <= end; i ++ )
		{
			//为什么交换一下这几块的顺序就过了啊真无语 
			if (cnt > k)
			{
				s[last] = 'x';
				ans ++;
				cnt = i - last;
			}
			if (s[i] == '*') last = i;
			cnt ++;
		}
		cout << ans << endl;
	}
	return 0;
}
