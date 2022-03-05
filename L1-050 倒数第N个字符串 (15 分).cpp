#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n; cin >> n;int m; cin >> m;
	
		int sum = 1;
		for (int i= 1; i <= n; i ++ )
		{
			sum *= 26;
		}
		m = sum - m + 1;
		if (n == 1)
		{
			char a = 'a';
			
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
			}
			printf("%c", a);
		}
		else if (n == 2)
		{
			char a = 'a';
			char b = 'a';
			
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
				if (a > 'z')
				{
					a = 'a';
					b ++;
				}
			}
			printf("%c%c", b, a);
		} 
		else if (n == 3)
		{
			char a = 'a';
			char b = 'a';
			char c = 'a';
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
				if (a > 'z')
				{
					a = 'a';
					b ++;
				}
				if (b > 'z')
				{
					b = 'a';
					c ++;
				}
			}
			printf("%c%c%c", c, b, a);
		} 
		else if (n == 4)
		{
			char a = 'a';
			char b = 'a';
			char c = 'a';
			char d = 'a';
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
				if (a > 'z')
				{
					a = 'a';
					b ++;
				}
				if (b > 'z')
				{
					b = 'a';
					c ++;
				}
				if (c > 'z')
				{
					c = 'a';
					d ++;
				}
			}
			printf("%c%c%c%c", d, c, b, a);
		} 
		else if (n == 5)
		{
			char a = 'a';
			char b = 'a';
			char c = 'a';
			char d = 'a';
			char e = 'a';
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
				if (a > 'z')
				{
					a = 'a';
					b ++;
				}
				if (b > 'z')
				{
					b = 'a';
					c ++;
				}
				if (c > 'z')
				{
					c = 'a';
					d ++;
				}
				if (d > 'z')
				{
					d = 'a';
					e ++;
				}
			}
			printf("%c%c%c%c%c", e, d, c, b, a);
		} 
		else if (n == 6)
		{
			char a = 'a';
			char b = 'a';
			char c = 'a';
			char d = 'a';
			char e = 'a';
			char f = 'a';
			for (int i = 2; i <= m; i ++ )
			{
				a ++;
				if (a > 'z')
				{
					a = 'a';
					b ++;
				}
				if (b > 'z')
				{
					b = 'a';
					c ++;
				}
				if (c > 'z')
				{
					c = 'a';
					d ++;
				}
				if (d > 'z')
				{
					d = 'a';
					e ++;
				}
				if (e > 'z')
				{
					e = 'a';
					f ++;
				}
			}
			printf("%c%c%c%c%c%c", f, e, d, c, b, a);
		}
	
	
	 
	return 0;
}
