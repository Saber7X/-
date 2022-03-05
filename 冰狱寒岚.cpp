#include<bits/stdc++.h> 
using namespace std;
vector<int> flag;
int main()
{
	int t; 
	cin >> t;
	for (int i = 0; i <= 1023; i ++ )
	{
		flag.push_back(i);
	}
	for (int i = -1024; i <= -1; i ++ )
	{
		flag.push_back(i);
	}
	while (t -- )
	{
		int n;
		cin >> n;
		cout << flag[n % 2048] << " ";
	}
	return 0;
}
