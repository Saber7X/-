//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1005;
//
//int f[N];
//int v[N];
//int w[N];
//
//int  main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		memset(f, 0, sizeof f);
//		memset(v, 0, sizeof v);
//		memset(w, 0, sizeof w);
//		double p;
//		int n;
//		cin >> p >> n;
//		p *= 100.0;
//		int m = (int)p;
//		
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			double x, y;
//			cin >> x >> y;
//			x *= 100.0;
//			y *= 100.0;
//			w[i] = (int)x;
//			v[i] = (int)y;
//		}
//		
//		for (int i = 1; i <= n; i ++ )
//		{
//			for (int j = m; j >= v[i]; j -- )
//			{
//				f[j] = max(f[j - v[i]] + w[i], f[j]);
//			}
//		}
//		cout << (double)f[m] * 1.0 / 100 << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 100005;


int value[N];
double gailv[N];

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		double p; int n; int sum = 0;
//		memset(f, 0.0, sizeof f);
		double f[N] = {0.0};
//		memset(value, 0, sizeof value);
//		memset(gailv, 0.0, sizeof gailv);
		
		cin >> p >> n;
		
		for (int i = 1; i <= n; i ++ )
		{
//			cin >> value[i] >> gailv[i];
			scanf("%d%lf", &value[i], &gailv[i]);
			
			gailv[i] = 1.0 - gailv[i];
			
			sum += value[i];
		}
		
		f[0] = 1.0;
		
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = sum; j >= value[i]; j -- )
			{
				f[j] = max(f[j], f[j - value[i]] * gailv[i]);
			}
		} 
		
		for (int i = sum; i >= 0; i -- )
		{
			if (f[i] > 1 - p)
			{
//				cout << i << endl;
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
