//#include<bits/stdc++.h>
////#define int long long
//using namespace std;
//const int N = 2e5 + 10;
//
//int s[N];
//int height[N];//�߶� 
//int n, m, k; 
//
//void init()//��ʼ�� 
//{
//	for (int i = 0; i <= N; i ++ ) 
//	{
//		s[i] = i;
//	}
//}
//
//int find(int x)//�����ڽڵ� 
//{
//	if (x != s[x]) s[x] = find (s[x]);
//	return s[x];
//}
//
//void hebing(int x, int y)//�ϲ� 
//{
//	x = find(x);
//	y = find(y);
//	s[x] = y;
////	if (height[x] == height[y])
////	{
////		height[x] = height[x] + 1;
////		s[y] = x;
////	}
////	else
////	{
////		if (height[x] < height[y]) s[x] = y;
////		else s[y] = x;
////	}
//}
//
//pair<int, int> p[N];
//
//signed main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		init(); 
//		cin >> n >> m >> k;
//		int cnt = 0; //��¼��ͻ��ϵ���� 
//		int cnt1 = n; //��¼����Ȧ���� 
//		int aa, bb; // ��¼��������Ȧ�����������Ȧ�� 
//		map<int, int> f;
//		for (int i = 1; i <= m + k; i ++ )
//		{
//			
//			int t, a, b; scanf("%d%d%d", &t, &a, &b);
//			if (t == 0) 
//			{
//				//����������Ǻ����ѣ���ô�ͺϲ������˵Ĺ�ϵ 
////				if (f[a] == 0 || f[b] == 0 ) cnt1 --;//��������ڵ㶼û�г��ֹ���ô����Ȧ����++��
//				if (find(a) != find(b)) cnt1 --;// !!!!!!!!!!!!!���Ҫ���ж��ٺϲ����������������������������� 
//				hebing(a, b);
//				f[a] = 1;
//				f[b] = 1;
//			}
//			else 
//			{
//				p[cnt].first = a;
//				p[cnt].second = b;
//				cnt ++;//��ͻ���� 
//			}
//			cout << cnt1 << " ";
//			int ans = 0; 
//			map<int, int> ff;
//			for (int i = 0; i < cnt; i ++ )
//			{
//				int x = p[i].first;
//				int y = p[i].second;
////				cout << find(x) << " : " << find(y) << endl;
//				if (find(x) == find(y) && ff[find(x)] == 0) 
//				{
//					ff[find(x)] = 1;
//					ans ++;
////					cout << ans << endl;
//				}
//				
//			}
//			cout << cnt1 - ans << endl;
//			if(i == m + k) 
//			{
//				aa = cnt1;//��������Ȧ���� 
//				bb = ans;// ���ճ�ͻ����Ȧ������ 
//			}
//		}
//		map<int, int> sum; //ÿ������Ȧ������
//		int zu[N] ; //�����ڽڵ�
//		int ji = 0;//��¼�м������ڽڵ� 
//		map<int, int> xxx; //���ͻ��ϵ������ 
//		int hash[N]={0};//����ȥ�� 
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			if (hash[find(i)] == 0)
//			{
//				zu[ji ++] = find(i);
//				hash[find(i)] = 1;
//			} 
//		}
//		for (int i = 1; i <= n; i ++ )
//		{
//			sum[find(i)] ++;
//		}
//		for (int i = 0; i < k; i ++ )
//		{
//			int x = p[i].first;
//			int y = p[i].second;
//			if (find(x) == find(y)) xxx[find(x)] ++;
//		}
//		int maxn = 0;
//		for (int i = 0; i < ji; i ++ )
//		{
//			if (xxx[zu[i]] <= 1) //�����ͻ��ϵ������С��1
//			{
//				maxn = max(sum[zu[i]], maxn);
//			 } 
//		}
//		cout << maxn << endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N = 2e5 + 10;

int s[N];
int height[N];//�߶� 
int n, m, k; 

void init()//��ʼ�� 
{
	for (int i = 0; i <= N; i ++ ) 
	{
		s[i] = i;
	}
}

int find(int x)//�����ڽڵ� 
{
	if (x != s[x]) s[x] = find (s[x]);
	return s[x];
}

void hebing(int x, int y)//�ϲ� 
{
	x = find(x);
	y = find(y);
	s[x] = y;
//	if (height[x] == height[y])
//	{
//		height[x] = height[x] + 1;
//		s[y] = x;
//	}
//	else
//	{
//		if (height[x] < height[y]) s[x] = y;
//		else s[y] = x;
//	}
}

pair<int, int> p[N];

signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		init(); 
		cin >> n >> m >> k;
		int cnt = 0; //��¼��ͻ��ϵ���� 
		int cnt1 = n; //��¼����Ȧ���� 
		int aa, bb; // ��¼��������Ȧ�����������Ȧ�� 
		map<int, int> f;
		for (int i = 1; i <= m + k; i ++ )
		{
			
			int t, a, b; scanf("%d%d%d", &t, &a, &b);
			if (t == 0) 
			{
				//����������Ǻ����ѣ���ô�ͺϲ������˵Ĺ�ϵ 
//				if (f[a] == 0 || f[b] == 0 ) cnt1 --;//��������ڵ㶼û�г��ֹ���ô����Ȧ����++��
				if (find(a) != find(b)) cnt1 --;// !!!!!!!!!!!!!���Ҫ���ж��ٺϲ����������������������������� 
				hebing(a, b);
				f[a] = 1;
				f[b] = 1;
			}
			else 
			{
				p[cnt].first = a;
				p[cnt].second = b;
				cnt ++;//��ͻ���� 
			}
			cout << cnt1 << " ";
			int ans = 0; 
			map<int, int> ff;
			for (int i = 0; i < cnt; i ++ )
			{
				int x = p[i].first;
				int y = p[i].second;
//				cout << find(x) << " : " << find(y) << endl;
				if (find(x) == find(y) && ff[find(x)] == 0) 
				{
					ff[find(x)] = 1;
					ans ++;
//					cout << ans << endl;
				}
				
			}
			cout << cnt1 - ans << endl;
			if(i == m + k) 
			{
				aa = cnt1;//��������Ȧ���� 
				bb = ans;// ���ճ�ͻ����Ȧ������ 
			}
		}
		map<int, int> sum; //ÿ������Ȧ������
		int zu[N] ; //�����ڽڵ�
		int ji = 0;//��¼�м������ڽڵ� 
		map<int, int> xxx; //���ͻ��ϵ������ 
		int hash[N]={0};//����ȥ�� 
		for (int i = 1; i <= n; i ++ ) 
		{
			if (hash[find(i)] == 0)
			{
				zu[ji ++] = find(i);
				hash[find(i)] = 1;
			} 
		}
		for (int i = 1; i <= n; i ++ )
		{
			sum[find(i)] ++;
		}
		for (int i = 0; i < k; i ++ )
		{
			int x = p[i].first;
			int y = p[i].second;
			if (find(x) == find(y)) xxx[find(x)] ++;
		}
		int maxn = 0;
		for (int i = 0; i < ji; i ++ )
		{
			if (xxx[zu[i]] <= 1) //�����ͻ��ϵ������С��1
			{
				maxn = max(sum[zu[i]], maxn);
			 } 
		}
		cout << maxn << endl;
	}
	return 0;
}
