#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int a, b; scanf("%d%d", &a, &b);
		int x = (a + b) / 2, y = a + b - x;
		map <int, int> f;
		int cnt = 0, ans[N];
		for (int i = 0; i <= a; i ++ )//ö��a����ʱӮ�Ĵ���
		{
			if (i <= x && a - i <= y) 
			{
				int flag = a - i + x - i;//a����Ӯ�Ĵ�����a������Ĵ���
				if (f[flag] == 0)
				{
					ans[cnt ++ ] = flag;
					f[flag] ++;
				} 
			}
		} 
		
		swap(x, y);
		
		for (int i = 0; i <= a; i ++ )//ö��a����ʱӮ�Ĵ���
		{
			if (i <= x && a - i <= y) 
			{
				int flag = a - i + x - i;//a����Ӯ�Ĵ�����a������Ĵ���
				if (f[flag] == 0)
				{
					ans[cnt ++ ] = flag;
					f[flag] ++;
				} 
			}
		} 
		printf("%d\n", cnt);
		sort (ans, ans + cnt);
		for (int i = 0; i < cnt; i ++ ) printf("%d ", ans[i]);
		printf("\n");
	}
	return 0;
}
