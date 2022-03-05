//#include <bits/stdc++.h>
//using namespace std;
//const int N = 1e5 +10;
//
//int main()
//{
//	int t; cin >>t;
//	while (t -- )
//	{
//		int ans;
//		int x1, y1, x2, y2; cin >>x1 >>y1 >>x2 >>y2;
//		if (x1 == x2 && y1 == y2) ans = 0;// 同一个点 
//		else if (x1 == x2 || y1 == y2)//在同一行或同一列 
//		{
//			if ((x1 + y1) % 2 != (x2 + y2) % 2) ans = 1;
//			else ans = 2;
//		}
//		else //不在同一行、列 
//		{
//			if ((x1 + y1) % 2 == 1 && (x2 + y2) % 2 == 1) //从奇数到奇数 
//			{
//				ans = 2;
//				if ((x1 + y2) % 2 == 1 && (y1 +x2) % 2 == 1) ans *= 2;//如果两角是奇数 
//			}
//			if ((x1 + y1) % 2 == 0 && (x2 + y2) % 2 == 0) //从偶数到偶数 
//			{
//				ans = 2;
//				if ((x1 + y2) % 2 == 0 && (x2 +y1) % 2 == 0) ans *= 2;//如果两角是偶数
//			}
//			if ((x1 + y1) % 2 != (x2 + y2) % 2 ) //偶-奇 、 奇-偶 
//			{
//				ans = 3;
//			}
//		}
//		cout << ans << endl;
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
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		int ans = 0;
		if (x1 == x2 && y1 == y2) ans = 0;
		else if ((x1 + y1) % 2 != (x2 + y2) % 2) ans = 1;
		else ans = 2;
		cout << ans << endl;
	}
	return 0;
}
