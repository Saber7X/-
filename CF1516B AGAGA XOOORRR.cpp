#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N =  2005;
int a[N];
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%lld", &n);
		int ans = 0;
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%lld", &a[i]);
			ans ^= a[i];
		}
		if (ans == 0) //�������ż������ͬ����ô��ֱ�ӵ���0�� 
		{
			cout << "YES" << endl;
			continue;
		}
		int ans1 = 0, cnt = 0;
		for (int i = 1; i <= n; i ++ )
		{
			ans1 = ans1 ^ a[i];
			if (ans1 == ans)
			{
				cnt ++;
				ans1 = 0;
			}
		}
		
		//���������������������ʹ���е�������Ϊ0����ô���ʣ�µ��Ǹ����������������������ȵ������ǾͿ�����Щ��ȵ����ĸ����Ƿ����2 
		if (ans1 == 0 && cnt >= 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
