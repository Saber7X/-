#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int n;
int a[N], f[N];

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
				f[i] = max(f[j] + 1, f[i]);//是它本身现有的子序列大（有可能已经被赋过值）还是 当前的以f[j]结尾的子序列 
			}
		}
	}
	int ans = -0x3f3f3f3f;
	for(int i = 1; i <= n; i ++ )
	{
		ans = max(f[i], ans);
	} 
	cout << ans;
	return 0;
}
