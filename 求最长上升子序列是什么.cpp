#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int n;
int a[N], f[N], g[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++ )
	{
		f[i] = 1;//自己本身算一个 
		for(int j = 1; j < i; j ++ )
		{
			if(a[j] < a[i])//如果f[j]后面可以放f[i] ;
			{
				//f[i] = max(f[j] + 1, f[i]);//是它本身现有的子序列大（有可能已经被赋过值）还是 当前的以f[j]结尾的子序列 
				if(f[i] < f[j] + 1)
				{
					f[i] = f[j] + 1;
					g[i] = j;//记录是从哪个状态转移来的 ，记下来的一定是最大的，因为到最大的，其他的就不会更新了 
					//以上一层值为下标，记录下一层的下标				
				}				
			}
		}
	}
	int ans = -0x3f3f3f3f, k = 1;
	for(int i = 1; i <= n; i ++ )
	{
		if(f[k] < f[i])
		{
			k = i;
		}
	} 
	cout << f[k];
	for(int i = 0 ; i < f[k]; i ++ )
	{
		cout << a[k] << " ";
		
		k = g[k];//一层一层向上找该子序列的上一个数 
	} 
	return 0;
}
