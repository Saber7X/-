#include<bits/stdc++.h> 
#define int long long

using namespace std;

const int N = 2e5 + 10;

int a[N];

int n, k;

bool check(int x)
{
	int sum = 0;//ʣ������ 
	int cnt = 0;//��cnt�����ŵ���������x 
	
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] >= x) cnt ++;
		else sum += a[i];
	}
	
	if ((k - cnt) * x <= sum)  return true;
	else return false;
}

signed main()
{
	cin >> n >> k;
	int maxn = 0;
	for (int i = 1; i <= n; i ++ ) 
	{
		scanf("%lld", &a[i]);
		maxn += a[i];
	}
	
	//��Ҫע����ַ�Χ 
	int l = 1, r = maxn / k;
	
	int ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid)) 
		{
			ans = mid;
			l = mid + 1;
		}
		else 
		{
			r = mid - 1;
		}
	}
	cout << ans << endl;
	return 0;
}
