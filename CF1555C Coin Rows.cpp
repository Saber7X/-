#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		int a[n + 10] = {0};
		int b[n + 10] = {0};
		for (int i = 1; i <= n; i ++ ) 
		{
			int x;
			cin >> x;
			a[i] = a[i - 1] + x;
		}
		for (int i = 1; i <= n; i ++ ) 
		{
			int x;
			cin >> x;
			b[i] = b[i - 1] + x;
		}
		int ans = 0x3f3f3f3f;
		for (int i = 1; i <= n; i ++ )
		{
			ans = min (ans, max(a[n] - a[i], b[i - 1]));//Bһ����ȡ����ȡ�����ֵ������A�϶�������Bȡ�����ֵ�����ջ���Bȡ���������ֵ�����Сֵ 
		}
		cout << ans << endl; 
	}
	return 0;
}
