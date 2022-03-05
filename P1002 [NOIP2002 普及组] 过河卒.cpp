#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int f[50][50]  = {0};
	int a, b, x, y;//B的坐标，和马的坐标
	cin >> a >>  b >> x >> y;
	bool flag[50][50] = {true, true};
	for(int i = 0; i < 50; i ++)
	{
		for(int j = 0; j < 50; j ++)
		{
			flag [i][j] = true;
		}
	}
	flag[x][y] = false;
	flag[x - 1][y + 2] = false;
	flag[x - 2][y + 1] = false;
	flag[x - 2][y - 1] = false;
	flag[x - 1][y - 2] = false;
	flag[x + 1][y - 2] = false;
	flag[x + 2][y - 1] = false;
	flag[x + 2][y + 1] = false;
	flag[x + 1][y + 2] = false;
	if(!flag[0][0] || !flag[a][b])
	{
		cout << "0" << endl;
		return 0;
	}
	else
	{
		bool t = true;
		for(int i = 0; i <= a; i ++)
		{
			if(!flag[i][0] || !t)
			{
				f[i][0] = 0;
				t = false;
				continue;
			}
			f[i][0] = 1;
		}
		
		t = true;
		for(int i = 0; i <= b; i ++)
		{
			if(!flag[0][i] || !t)
			{
				t = false;
				f[0][i] = 0;
				continue;
			}
			f[0][i] = 1;
		}
		
		
		for(int i = 1; i <= b; i ++)
		{
			for(int j = 1; j <= a; j ++ )
			{
				if(!flag[j][i])
				{
					f[j][i] = 0;
					continue;
				}
			
				f[j][i] = f[j - 1][i] + f[j][i - 1];
			}
		}
//		for(int i = 0; i<=a; i ++)
//		{
//			for(int j = 0; j <= b; j ++)
//			{
//				cout << f[i][j] <<" ";
//			}
//			cout <<endl;
//		}
		cout << f[a][b] << endl;
	}	
	return 0;
}
