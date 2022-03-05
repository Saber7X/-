#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
int flag[100][N];

vector<int> g[N];

int a[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		int x = a[i];
		
		g[x].push_back(a[i]);
		
		flag[a[i]][a[i]] ++;
		
		while (1)
		{
			if (x == 1) break;
			
			if (x % 2 == 0) x /= 2;
			else x = (x * 3 + 1) / 2;
			
			g[a[i]].push_back(x);
			
			flag[a[i]][x] ++;
		}
	}
	
	vector<int> ans;
	
	for (int i = 1; i <= n; i ++ )
	{
		bool f = 0;//i是否是关键数 
		
		for (int j = 1; j <= n; j ++ )
		{
			if (i == j) continue;
			
			int ff = 0;//i 和 j 里有没有重复出现的数 
			for (int k = 0; k < g[a[i]].size(); k ++ )
			{
				int jj = g[a[i]][k];
				
				if (flag[a[j]][jj] == 0)
				{
					ff = 1;
					break;
				}
			}
			
			if (ff == 0)
			{
				f = 1;
				break;
			}
		}
		
		if (f == 0)
		{
			ans.push_back(a[i]);
		}
	}
	
	sort(ans.begin(), ans.end());
	
	for (int i = ans.size() - 1; i >= 1; i -- )
	{
		cout << ans[i] << " ";
	}
	
	cout << ans[0];
	return 0;
}
/*

*/
