#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 310;
int n, h, s;//怪物数量，总健康值，总耐力 
int a, b, c; 
int f[N][N];

signed main()
{
	cin >> n >> h >> s;
	
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a >> b >> c;
		
		for(int j = h; j > a; j -- )//健康值，不能为0
		{
			for(int k = s; k >= 0; k -- )//耐力值 
			{
				if(k - b >= 0)//如果耐力值够用 
				{
					f[j][k] = max(f[j][k], f[j - a][k - b] + c);
				}
				else if(j - a + k - b > 0 )//如果耐力值不够用就用生命值减需要的耐力值，如果够减，则进入判断，因为此时耐力值归0，所以用上一层的 耐力值为0的情况来判断 
				{
					f[j][k] = max(f[j][k], f[j - a + k - b][0] + c);  //耐力值归0 
				}
			} 
		} 
	}
	cout << f[h][s] <<endl;
	
	return 0;
}
