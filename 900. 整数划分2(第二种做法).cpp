#include<bits/stdc++.h> 
using namespace std;
const int N = 1010, mod = 1e9 + 7;
int f[N][N];
int main()
{
	f[0][0] = 1;
	int n; cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= i; j ++ )//��Ϊ����i���и���������i���ֻ��i����������ֻ��i 
		{
			f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % mod;
		}
	}
	//����ٰ�ÿ�ָ����ķ������
	int ans = 0;
	for(int i = 1; i <= n; i ++ )
	{
		ans += f[n][i];
		ans %= mod;
	}
	cout << ans; 
	return 0;
}
