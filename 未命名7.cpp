#include<bits/stdc++.h>
using namespace std;
cosnt int N = 1e5 + 10, mod = 998244353;

int main()
{
	int t; cin >> t;
	while (t -- ) 
	{
		string s;
		cin >> s;
		int flag = 1;
		int suma = 0;
		
		int a[N]; int cnt = 0;
		
		for (int i = 0; i < s.length(); i ++ )
		{
			if(s[i] == 'a') suma ++;
		}
		
		int ff = 0;
		if (a[0] == 'a') 
		{
			for (int i = 0; i < s.length(); i ++ )
			{
				if(s[i] != a)
				{
					ff = i;
					break;
				}
			}
		}
		
		int gg = ff;
		for (int i = ff; i < s.length(); i ++ )
		{
			
			if(s[i] == 'a') 
			{
				a[cnt ++ ] = i - 1 - gg;
				for (int j = i; i < s.length(); i ++ )
				{
					if(s[i] != a)
					{
						ff = i;
						break;
					}
				}
			}
		}
		
	}
	return 0;
}
