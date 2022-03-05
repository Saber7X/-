#include<bits/stdc++.h>
using namespace std;
int  main()
{
	vector<string> v;
	char a ;
	
	string s = "";
	while (a = getchar())
	{
		if (a == '\n') 
		{
			break;
		}
		
		if (a != ' ')
		{
			s += a;
		}
		else
		{
			v.push_back(s);
			s = "";
		}
	}
	v.push_back(s);
	for (int i = v.size() - 1; i >= 0; i -- )
	{
		cout << v[i];
		if (i != 0) cout << " ";
	}
	return 0;
}
