//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		int n; cin >> n;
//		int num[n + 4];//��¼ԭ���� 
//		map<int, int> cnt;//��¼ÿ�������ֵĸ��� 
//		for (int i = 1; i <= n; i ++ )
//		{
//			cin >> num[i];
//			cnt[num[i]] ++;
//		}
//		int s[500][500]; //��¼ÿһλ��ѭ���� 
//		int v;//��ǰ�� 
//		for (int i = 1; i <= n; i ++ )
//		{
//			v = num[i];
//			int f[100005]={0};
//			int c = 0;
//			while (1) 
//			{
//				cout <<" ��1   ";
//				if (f[v] != 0) //���ֹ�
//				{cout <<" ��2   ";
//					if (v != num[i]) 
//					{cout <<" ��3   ";
//						cnt[v] --;
//						cnt[num[i]] ++;
//					}
//					break;
//				}	cout <<" ��4   ";
//				cnt[v] --;cout <<" ��5   ";
//				s[i][c++] = v;cout <<" ��6   ";
//				f[v] = 1;cout <<" ��7   ";
//				v = cnt[v] + 1;cout <<" ��8   ";
//				cnt[v] ++;cout <<" ��9   ";
//				cout <<" ��10   ";
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
		int num[n + 4];//��¼ԭ���� 
		map<int, int> cnt;//��¼ÿ�������ֵĸ��� 
		for (int i = 1; i <= n; i ++ )
		{
			cin >> num[i];
			cnt[num[i]] ++;
		}
		int s[500][500]; //��¼ÿһλ��ѭ���� 
		int v;//��ǰ�� 
		for (int i = 1; i <= n; i ++ )
		{
			v = num[i];
			int f[100005]={0};
			int c = 0;
			while (1) 
			{
				cout <<" ��1   ";
				if (f[v] != 0) //���ֹ�
				{cout <<" ��2   ";
					if (v != num[i]) 
					{cout <<" ��3   ";
						cnt[v] --;
						cnt[num[i]] ++;
					}
					break;
				}	cout <<" ��4   ";
				cnt[v] --;cout <<" ��5   ";
				s[i][c++] = v;cout <<" ��6   ";
				f[v] = 1;cout <<" ��7   ";
				v = cnt[v] + 1;cout <<" ��8   ";
				cnt[v] ++;cout <<" ��9   ";
				cout <<" ��10   ";
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
