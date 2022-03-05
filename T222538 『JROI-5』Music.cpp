#include<bits/stdc++.h> 
#define int long long
using namespace std;

unordered_map<int, int> ma;
inline int read()
{
	int x=0;
	bool flag=1;
	char c=getchar();
	while(c<'0'||c>'9')
	{
		if(c=='-')
			flag=0;
		c=getchar();
	}
	while(c>='0'&&c<='9')
	{
		x=(x<<1)+(x<<3)+c-'0';
		c=getchar();
	}
	return (flag?x:~(x-1));
}
signed main()
{
	int t;
	cin >> t;
	int n, x;
	int sum = 0;
	while (t -- )
	{
		n = read();
		x = read();
		if (x > 1 && !ma[n])
		{
			sum += x;
			ma[n] = 1;
		}
	}
	cout << sum ;
	return 0;
}
