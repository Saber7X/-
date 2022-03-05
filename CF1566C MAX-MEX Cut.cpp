#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	int cnt = 0;
	while (t -- )
	{
		cnt ++;
//		cout << cnt << " ::   ::::::::::::::::::: " << endl; 
		int n; cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		int sum = 0;
		int f = -1;
		for (int i = 0; i < n; i ++ )
		{
			if (s1[i] != s2[i])
			{
				if (f == 0) sum += 3;
				else sum += 2;
				
				f = 2; //¸üĞÂ×´Ì¬ 
			}
			
			else if (s1[i] == '1' && s2[i] == '1') 
			{
				if (f == 0) 
				{
					sum += 2;
					f = 2;
				}
				else f = 1;
			}
			
			else if (s1[i] == '0' && s2[i] == '0') 
			{
				if (f == 1) 
				{
					sum += 2;
					f = 2;
				}
				else if (f == 0) 
				{
					sum += 1;
					f = 0;
				}
				else f = 0;
			}
			 
		}
		if (f == 0) sum ++;
		cout << sum << endl;
	}
	return 0;
}
/*
3
001
001
3
*/
