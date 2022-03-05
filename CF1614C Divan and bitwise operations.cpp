#include<bits/stdc++.h>
#define int long
using namespace std;

int qim(int a,int k,int p)
{//a^k%p的值
    int res=1;
    while(k){
        if(k & 1) res=(long long int)res*a%p;//k二进制之后的最后一位
        k >>=1;//往前移一位
        a=(long long int)a*a%p;//a更新
    }
    return res;
}
signed main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, m;
		cin >> n >> m;
		int sum = 0;
		for (int i = 1; i <= m; i ++ =)
		{
			int l ,r, x;
			cin >> l >> r >> x;
			sum |= x;
		}
		cout << qim(2, sum - 1, 1e9 + 7) << endl;
	}
	return 0;
}
