//https://www.luogu.com.cn/blog/Sunzizhong2019/solution-cf1592b
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int a[N], b[N];

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, x; scanf("%d %d", &n, &x);
		
		for (int i = 1; i <= n; i ++ ) 
		{
			scanf("%d", &a[i]); b[i] = a[i];
		}
		
		if (n - x >= n / 2) cout << "YES" << endl; //可以做到全覆盖，也就是说，一个数可以通过多次移动转移到数组中的任意一个位置 
		else
		{
			int flag = 0; 
			sort(b + 1, b + 1 + n) ;
			for (int i = n - x + 1; i <= n - (n - x); i ++ )//看不能移动的区域顺序对不对 
			{
				if(a[i] != b[i])
				{
					cout << "NO" << endl;
					flag = 1;
					break;
				}
			}if (flag == 0) cout << "YES" <<endl;
		}
		
		 
	}
	return 0;
}
