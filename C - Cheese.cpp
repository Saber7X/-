#include<bits/stdc++.h>
#define  int long long
using namespace std;
const int N = 3e5 + 10;
struct name
{
	int flag; //ÿ�˵���ζֵ 
	int nn; //�еĿ��� 
}num[N];
bool cmp(name a, name b)
{
	return a.flag > b.flag;
}
signed main()
{
	int n, w;
	int ans = 0;
	cin >> n >> w;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld %lld", &num[i].flag, &num[i].nn);
	}
	sort (num + 1, num + 1 + n, cmp);
	for (int i = 1; i <= n; i ++ )
	{
		if (w <= num[i].nn)
		{
			ans += w * num[i].flag;
			break;
		}
		else 
		{
			ans += num[i].flag * num[i].nn;
			w -= num[i].nn;
		}
	}
	cout << ans << endl;
	return 0;
}
