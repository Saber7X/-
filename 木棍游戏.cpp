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
//void dfs(int u)         //u表示的不是第几段，而是每段开头的第一个数，后面的数会跳过
//{
//    if (u == n)         //到达叶子节点，输出该方案
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
//    while (k < n && a[k] == a[u]) k ++ ;            //跳过同一段后面的数字
//
//    dfs(k);                                         //没有标记st直接dfs，即枚举选0个的情况
//
//    for (int i = u; i < k; i ++ )                   //将同一段的数逐个设为true然后dfs
//    {
//        st[i] = true;
//
//        dfs(k);                                     //从下一段开始枚举
//    }
//
//    for (int i = u; i < k; i ++ ) st[i] = false;    //批量还原现场
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
