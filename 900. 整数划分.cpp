#include<bits/stdc++.h> 
using namespace std;
const int N = 1010, mod = 1e9 + 7;
int n, f[N];

int main()
{
	cin >> n;
	f[0] = 1;//初始化，体积为0时有一种选法 
	for(int i = 1; i <= n; i ++ )//枚举1-n件物品 
	{
		for(int j = i; j <= n; j ++ )//枚举体积1-n 
		{
			f[j] = (f[j] + f[j - i]) % mod;//当前容量为j时的体积等于不选第i个物品f[j]，和选第i个物品也就是说用前i-1个物品时体积为j - i时的选法加上i即可也就是用前i-1个物品时体积为j - i时的选法，然后加上不选i的选法 ，就是体积为j时所有的选法 
		}
		 
	} 
	cout << f[n];
	return 0;
}
