//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		int n; cin >> n;
//		int num[n + 4];//记录原数组 
//		map<int, int> cnt;//记录每个数出现的个数 
//		for (int i = 1; i <= n; i ++ )
//		{
//			cin >> num[i];
//			cnt[num[i]] ++;
//		}
//		int s[500][500]; //记录每一位的循环节 
//		int v;//当前数 
//		for (int i = 1; i <= n; i ++ )
//		{
//			v = num[i];
//			int f[100005]={0};
//			int c = 0;
//			while (1) 
//			{
//				cout <<" 这1   ";
//				if (f[v] != 0) //出现过
//				{cout <<" 这2   ";
//					if (v != num[i]) 
//					{cout <<" 这3   ";
//						cnt[v] --;
//						cnt[num[i]] ++;
//					}
//					break;
//				}	cout <<" 这4   ";
//				cnt[v] --;cout <<" 这5   ";
//				s[i][c++] = v;cout <<" 这6   ";
//				f[v] = 1;cout <<" 这7   ";
//				v = cnt[v] + 1;cout <<" 这8   ";
//				cnt[v] ++;cout <<" 这9   ";
//				cout <<" 这10   ";
//			}
//		}
//		int q; cin >> q;
//		while (q -- )
//		{
//			int x, k; cin >> x >> k;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		int num[n + 4];//记录原数组 
		map<int, int> cnt;//记录每个数出现的个数 
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i];
			cnt[num[i]] ++;
		}
		int s[500][500]; //记录每一位的循环节 
		int v;//当前数 
		for (int i = 1; i <= n; i ++ )
		{
			v = num[i];
			int f[100005]={0};
			int c = 0;
			while (1) 
			{
				cout <<" 这1   ";
				if (f[v] != 0) //出现过
				{cout <<" 这2   ";
					if (v != num[i]) 
					{cout <<" 这3   ";
						cnt[v] --;
						cnt[num[i]] ++;
					}
					break;
				}	cout <<" 这4   ";
				cnt[v] --;cout <<" 这5   ";
				s[i][c++] = v;cout <<" 这6   ";
				f[v] = 1;cout <<" 这7   ";
				v = cnt[v] + 1;cout <<" 这8   ";
				cnt[v] ++;cout <<" 这9   ";
				cout <<" 这10   ";
			}
		}
		int q; cin >> q;
		while (q -- )
		{
			int x, k; cin >> x >> k;
		}
	}
	return 0;
}
