#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s = "aaabbaa";
	
	for (int i = 1; i <= 1e5; i ++ )
	{
		for (int j = 1; j <= 5; j ++ )
		{
			reverse(s.begin(), s.end());
			string a = s.substr(j);
			
		}
	}
	cout << "End" << endl;
	return 0;
}
