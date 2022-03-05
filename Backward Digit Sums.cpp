////i
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <complex>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <cassert>
//#define endl '\n' 
//#define int long long
//using namespace std;
//const int N = 2e5+10;
//typedef long long ll;
//int n, k;
//int ans[20];
//bool st[20];
//bool f = 0;
//
//// string change(int a[])
//// {
////     string s = "";
////     for (int i = 1; i <= n; i ++ )
////     {
////         s.push_back(a[i] + '0');
////     }
////     return s;
//// }
//// map<int, string> anss;
//void dfs(int u)
//{
//    if (f) return;
//    if (u > n)
//    {
//        int g[100][100] = {0};
//        for (int i = 1; i <= n; i ++ )
//        {
//            g[n][i] = ans[i];
//        }
//        for (int i = n - 1; i >= 1; i -- )
//        {
//            for (int j = 1; j <= i; j ++ )
//            {
//                g[i][j] = g[i + 1][j] + g[i + 1][j + 1];
//            }
//        }
//        if (g[1][1] == k) 
//        {
//            f = 1;
//            for (int i = 1; i <= n; i ++ )
//            {
//                cout << ans[i] << " ";
//            }
//        }
//        return;
//    }
//    for (int i = 1; i <= n; i ++ )
//    {
//        if (f) return;
//        if (!st[i])
//        {
//            ans[u] = i;
//            st[i] = true;
//            dfs(u + 1);
//            if (f) return;
//            st[i] = false;
//            ans[u] = 0;
//        }
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0),cout.tie(0);
//    cin >> n >> k;
//    dfs(1);
//    // string aa = anss[k];
//    // // cout << aa << endl;
//    // for (int i = 0; i < aa.length(); i ++ )
//    // {
//    //     if (aa[i] == ':') cout << "10 ";
//    //     else cout << aa[i] << " ";
//    // }
//    return 0;
//}
////4 1 3 2 5    :   39
#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int n, sum, a[N], b[N];

int main()
{
	cin >> n >> sum;
	for (int i = 1; i <= n; i ++ )
	{
		a[i] = i;
	}
	bool f = 0;
	while (1)
	{
		next_permutation(a + 1, a + 1 + n);
		int cur = n - 1;
		bool ok = 0;
		int A[n + 10];
		for (int i = 1; i <= n; i ++ )
		{
			A[i] = a[i];
		}
		
		while (cur >= 1)
		{
			
			for (int i = 1; i <= cur; i ++ )
			{
				A[i] = A[i] + A[i + 1];
			}
			cur --;
		}
		
//		cout << A[1] << endl;
		if (A[1] == sum)
		{
			for (int i =1 ;i <= n; i ++ ) cout << a[i] << " ";
			break;
		}
		
	}
	return 0;
}
