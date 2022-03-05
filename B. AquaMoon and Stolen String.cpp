#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
int main()
{
	int T; scanf("%d", &T);
	while(T -- )
	{
		int n, m;
		scanf("%d%d", &n, &m);
		getchar();
		char g[n + 5][m + 5];
		char g2[n + 5][m + 5];
		for(int i = 1; i <= n; i ++ )
		{
			for(int j = 1; j <= m; j ++)
			{
				//scanf("%c", &g[i][j]);
				cin >> g[i][j];
			}
		}
		for(int i = 1; i <= n - 1; i ++ )
		{
			for(int j = 1; j <= m; j ++)
			{
				cin >> g2[i][j];
			}
		}
		string s = "";
		for(int i = 1; i <= m; i ++ )
		{
			unordered_map <char, int> flag;
			unordered_map <char, int> flag2;
			for(int j = 1; j <= n; j ++)
			{
				flag[g[j][i]] ++;
			}
			for(int j = 1; j <= n - 1; j ++ )
			{
				flag2[g2[j][i]] ++;
			}
			for(char j = 'a'; j <= 'z'; j ++ )
			{
				if(flag[j] - flag2[j] == 1)
				{
					s += j;
					break;
				}
			}
		}
		cout << s << endl;		
	}
	return 0;
}
