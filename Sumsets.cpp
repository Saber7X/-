//
//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 10;
//int f[N];
//int a[N] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
//signed main()
//{
//	
//	int n; 
////	scanf("%d", &n);
//	cin >> n;
//	f[0] = 1;
//	
//	for (int i = 0; i < 20; i ++ )
//	{
//		for (int j = a[i]; j <= n; j ++ )
//		{
//			f[j] += f[j - a[i]];
//			f[j] %= 1000000000;
//		}
//	}
//	cout << f[n] << endl;
////	printf("%d\n", f[n]);
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<cstring>
////#define int long long
//using namespace std;
//const int N = 1e6 + 10;
//int f[N];
//int a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
//signed main()
//{
//	
//	int n; cin >> n;
////	while ()
////	{
//		memset(f, 0, sizeof f);
//		f[0] = 1;
//		for (int i = 0; i < 20 && a[i] <= n; i ++ )
//		{
//			for (int j = a[i]; j <= n; j ++ )
//			{
//				f[j] += f[j - a[i]];
//				f[j] %= 1000000000;
//			}
//		}
//		
//		cout << f[n] << endl;
////	}
//	
//	
//
//	
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e6 + 10;
int f[N];
int a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
signed main()
{
	
	int n; cin >> n;
	
	f[0] = 1;
	for (int i = 0; i < 20 && a[i] <= n; i ++ )
	{
		for (int j = a[i]; j <= n; j ++ )
		{
			f[j] += f[j - a[i]];
			f[j] %= 1000000000;
		}
	}
	
	cout << f[n] << endl;
	
	return 0;
}
