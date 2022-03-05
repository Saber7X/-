#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct name{
	string s;
}num[N];
bool cmp(name a, name b)
{
	return a.s < b.s;
}
int main() 
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m; scanf("%d%d", &n, &m);
		getchar();
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i].s;
		}
		sort (num + 1, num + 1 + n, cmp);
		string ss = "";
		for (int i = 1; i <= n; i ++ )
		{
			ss += num[i].s;
		}
		int num[N *2]={0};
		int sum = 0;
		for (int i = 0; i < ss.length(); i ++ )
		{
			if (ss[i] == '1') 
			{
				num[i] = num[i - 1];
				
			}
			else 
			{
				sum ++;num[i] = num[i - 1] + 1;
			}
		}
		int ans = 0;
		for (int i = 0; i < ss.length(); i ++ )
		{
//			cout <<num[i] <<" ";
			if (ss[i] == '1') ans = ans + (sum - num[i]);
		}
//		cout << endl;
		cout <<ans <<endl;
//		cout <<ss << endl;
	}
	return 0;
}
