#include<bits/stdc++.h> 
using namespace std;
const int N =  1e5 + 10;
int num[N];
int f[N][3];
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		memset(f, 0, sizeof f);
		int n; cin >> n;
		for (int i = 1; i <= n; i ++ ) 
		{
			cin >> num[i];
			f[num[i]][i % 2] ++ ;
		}
		sort(num + 1, num + 1 + n);
		
		bool flag = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (f[num[i]][i % 2] == 0) //如果不存在和它在相同位置写上的数 
			{
				flag = 1; 
				break;
			}
			//用完个数-1 
			f[num[i]][i % 2] --;
		}
		if (flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
