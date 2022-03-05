#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string a, b;
	cin >> a >> b;
	map<char, int> ma;
	for (int i = 0; i < b.length(); i ++ )
	{
		ma[b[i]] = 1;
	}
	for (int i = 0; i < a.length(); i ++ )
	{
		if (!ma[a[i]])
		{
			
			
			if (a[i] >= 'A' && a[i] <= 'Z') //|| ()
			{	
				cout << a[i];
				ma[a[i]] = 1;
				ma[tolower(a[i])] = 1;
				continue;
			}
			if (a[i] >= 'a' && a[i] <= 'z') 
			{
				cout << (char)toupper(a[i]);
				ma[a[i]] = 1;
				ma[toupper(a[i])] = 1;
				continue;
			}
			cout << a[i];
			ma[a[i]] = 1;
		}
	}
	return 0;
}
