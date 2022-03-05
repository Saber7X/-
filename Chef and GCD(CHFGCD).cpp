#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b)//aºÍb
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

signed main()
{
	int T ; cin >> T ;
	while( T -- )
	{
		int x, y;
		scanf("%lld %lld", &x, &y);
		if (x % y == 0 && y % x == 0)
		{
			printf("0\n");
		}
		else if (gcd(x, y) > 1)
		{
			printf("0\n");
		}
		else
		{
			int ans = 0;
			int a = x+1, b = y + 1;
			if(gcd(a, y) > 1 || gcd(x, b) > 1)
			{
				printf("1\n");
			}
			else
			{
				printf("2\n");
			}
		}
	}
	return 0;
}
