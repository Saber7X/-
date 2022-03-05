#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool f[N];
vector<int> res;
int main()
{
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++ )
	{
		int x; scanf("%d", &x);
		
		//标记出x所有的质因子 
		for(int j = 2; j * j <= x; j ++)
		{
			while(x % j == 0)
			{
				if(j <= m) f[j] = true;
				x /= j;
			}
		}
		if(x >= 1 && x <= m) f[x] = true;	
	}
	
	for (int i = 1; i <= m; i ++ )
	{
		for (int j = 2 * i; j <= m; j += i)
		{
			f[j] |= f[i];
		}
	}
	
	for(int i = 1; i <= m; i ++ )
	{
		if(!f[i]) res.push_back(i);
	}
	
	cout << res.size() << endl;
	
	for(auto x : res) cout << x << endl;
	
	return 0;
}
