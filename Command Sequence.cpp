//#include<bits/stdc++.h> 
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int main()
//{
//	int t; scanf("%d", &t);
//	
//	while (t -- )
//	{
//		int ans = 0;
//		int n;char s[N];
//		
//		scanf("%d", &n);
//		scanf("%s", &s);
//		
//		for(int i = 0; i < n - 1; i ++ )
//		{
//			int a = 0, b = 0, x = 0, y = 0;
//		
//			for(int j = i; j < n; j ++ )
//			{
//				if(s[j] == 'U') a ++;
//				if(s[j] == 'D') b ++;
//				if(s[j] == 'L') x ++;
//				if(s[j] == 'R') y ++;
//		
//				else if(a == b && x == y) ans ++;
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main()
{
	int t; cin >> t;
	
	while (t --)
	{
		int n, ans = 0;
		char s[N];
		
		scanf("%d%s", &n, s + 1);
		for(int len = 2; len <= n; len += 2 )//枚举长度 
		{
			for(int l = 1; l + len - 1 <= n; l ++)//枚举左端点 
			{
				int a = 0, b = 0, x = 0, y = 0;//分别记录上下左右的个数 
				int r = l + len - 1;//确定右端点 
				
				for(int i = l; i <= r; i ++ ) //枚举该子串 
				{
					//记录个数 
					if(s[i] == 'U') a ++;
					if(s[i] == 'D') b ++;
					if(s[i] == 'L') x ++;
					if(s[i] == 'R') y ++;
				}
				
				//进行判断 
				if(a == b && x == y) ans ++;	
				cout << ans << endl; 
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
