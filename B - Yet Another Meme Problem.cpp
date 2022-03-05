//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a, b;
//	//cin >> a >> b;
//	int ans = 0;
//	for(int i = 1; i <= 100000; i ++ )
//	{
//		for(int j = 1; j <= 100000; j ++ )
//		{
//			int a1=0, a2 = 0;
//			a = i, b = j;
//			while(b > 0)
//			{
//				b/=10;
//				a2 ++;
//			}
//			b = j;
//			for(int k = 1; k <= a2; k ++)
//			{
//				a *= 10;
//			}
//			int sum = a + b;
//			if(sum == i * j + i + j)
//			{
//				ans ++;
//				cout << i <<"  "<< j << endl;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream> 
#define int long long
using namespace std;
signed main()
{
	int T;
	cin >> T;
	while(T -- )
	{
		int a, b;
		scanf("%lld%lld", &a, &b);
		int flag = b;
		int ans = 0;
		bool st = true;
		while(flag > 0)
		{
			if(flag % 10 != 9)
			{
				st = false;
			}
			flag /= 10;
			ans ++;
		}
		if(!st) ans --;
		printf("%lld\n", a * ans);
	}
	return 0;
}
