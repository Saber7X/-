//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20;
//
//int cnt = 1;
//struct name{
//	int nn;
//	int ans[50];
//	bool s[50];
//	int sum;
//}num[500];
//
//int n;
//int a[N];
//bool st[N];
//
//void dfs(int u)         //u��ʾ�Ĳ��ǵڼ��Σ�����ÿ�ο�ͷ�ĵ�һ�������������������
//{
//    if (u == n)         //����Ҷ�ӽڵ㣬����÷���
//    {
//		int c = 1;
//		int summ = 0;
//        for (int i = 0; i < n; i ++ )
//        {
//        	if (st[i])
//            {
//            	
////            	cout << a[i] << " ";
//            	num[cnt].ans[c] = a[i];
//            	c ++;
//            	num[cnt].s[a[i]] = 1;
//            	summ += a[i];
//            	
//			}
//		}
////        cout << endl;
//		num[cnt].sum = summ;
////		num[cnt].nn = n;
//		cnt ++; 
//        return;
//    }
//
//    int k = u;
//    while (k < n && a[k] == a[u]) k ++ ;            //����ͬһ�κ��������
//
//    dfs(k);                                         //û�б��stֱ��dfs����ö��ѡ0�������
//
//    for (int i = u; i < k; i ++ )                   //��ͬһ�ε��������ΪtrueȻ��dfs
//    {
//        st[i] = true;
//
//        dfs(k);                                     //����һ�ο�ʼö��
//    }
//
//    for (int i = u; i < k; i ++ ) st[i] = false;    //������ԭ�ֳ�
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i ++ ) cin >> a[i];
//    sort(a, a + n);
//
//    dfs(0);
////	for (int i = 1; i <= cnt; i ++ )
////	{
////		for (int j = 1; j <= n; j ++ )
////		{
////			cout << num[i].ans[j] << " ";
////		}
////		cout << endl;
////	}
//	double ans = 0x3f3f3f3f;
//	for (int i = 1; i < cnt; i ++ )
//	{
//		int sttt[500] = {0};
//		for (int j = 1; j <= n; j ++ )
//		{
//			if (st[num[i].ans[j]]) sttt[num[i].ans[j]] ++;
//		}
//		
//		for (int j = 1; j < cnt; j ++ )
//		{
//			bool f = 0;
//			for (int k = 1; k <= n; k ++ )
//			{
//				if (st[num[j].ans[k]]) 
//				{
//					sttt[num[j].ans[k]] ++;
//					if (sttt[num[j].ans[k]] > 1) 
//					{
//						f = 1;
//						break;
//					}
//				}
//			}
//			if (f) continue;
//			
//			for (int k = 1; k < cnt; k ++ )
//			{
//				f = 0;
//				for (int l = 1; l <= n; l ++ )
//				{
//					if (st[num[k].ans[l]]) 
//					{
//						sttt[num[k].ans[l]] ++;
//						if (sttt[num[k].ans[l]] > 1) 
//						{
//							f = 1;
//							break;
//						}
//					}
//				}
//				if (f) continue;
//				
//			}
//		}
//	}
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
const int N = 5000;
int a[N];
int n;


int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ ) cin >> 
	return 0;
}
