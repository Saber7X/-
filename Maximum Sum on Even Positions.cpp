//��ÿ�������ڵ���ż�±꽻���Ĺ���ֵ 
///ԭ����ż���±�֮��+��ż�±꽻�������Ĺ��� 
//����û�����Ĳ�Ӱ��������Ϊ��һ�����䣬��0�ȿ��Դ����������һ��Ϊ�����͹��� 
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int a[N];
int t, n;
signed main()
{
	cin >> t;
	while(t -- )
	{
		cin >> n;
		int ans = 0;
		for(int i = 0; i < n; i ++ )
		{
			cin >> a[i];
			if (i % 2 == 0) ans += a[i];//������ż��λ�ĺ� 
		}
		int x = 0, y = 0, maxn = 0;
		for (int i = 0; i < n; i += 2 )
		{
			x = max((int)0, a[i - 1] - a[i] + x);//����ֵ�ۼ�
			maxn = max(maxn, x);
		}
		for(int i = 1; i <n; i += 2 )
		{
			y = max((int)0, a[i] - a[i - 1] + y);
			maxn = max(y, maxn);
		}
		cout << ans + maxn << endl;
	}
	return 0;
}
