#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 1e6;
int f[N];
signed main()
{
	int cnt = 0;
	for(int i = 1; i <= 31623; i ++ )
	{
		f[cnt ++ ] = i * i;
	}
	int t;
	scanf("%lld", &t);
	while (t -- )
	{
		int x, y;
		int a; scanf("%lld", &a);
		int flag = f[lower_bound(f, f + cnt, a) - f];//那个范围值
//		cout << flag ; 
		int flag1 = sqrt(flag);//横纵坐标范围 
		int s = flag - a;//相差的值;
		if(s >= flag1)  
		{
			s = s - flag1;
			x = flag1 - s - 1;
			y = flag1;
		}
		else
		{
			x = flag1;
			y = 1 + s;
		}
		printf("%lld %lld\n", x, y);
//		cout << x << " " <<  y << endl;
	}
	
	return 0;
} 
