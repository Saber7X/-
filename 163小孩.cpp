//#include<bits/stdc++.h>
//using namespace std;
//
//int a[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13};
//
//map<int, int> m;
//
//int ans[20];
//void dfs(int u)
//{
//	if (u > 6)
//	{
//		
//	}
//	for (int i = u; i <= n; i ++ )
//	{
//		
//	}
//}
//
//int main()
//{
//	
//	return 0;
//}

#include <iostream>
#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 30;

bool st[10000];
int n= 53, m = 6;
int a[1000] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13};
int ans[1000];
int cnt = 0;

map<string, int> ma;

void dfs(int u)
{
	if (u > 6)
	{
		sort(ans + 1, ans + 6);
		string s= "";
		for (int i = 1; i <= 6; i ++ )
		{
			s += to_string(ans[i]);
		}
		if (ma[s] == 0)
		{
			
			for (int i = 1; i <= 6; i ++ ) 
			cout << a[i] << " ";cout << endl;
			ma[s] = 1;
			cnt ++;
		}
		return;
	}
	for (int i = 1; i <= 53; i ++ )
	{
		if (!st[i])
		{
			st[i] = 1;
			ans[u] = a[i];
			dfs(u + 1);
			st[i] = 0;
		}
	}
}

signed main()
{
	dfs(1);
	cout << cnt << endl;
	return 0;
}
