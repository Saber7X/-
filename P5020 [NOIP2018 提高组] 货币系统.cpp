//要使最少，只要保证A中的每一个元素不可以被别的元素组成，去掉这些可以被组成的元素，就是B的元素 
#include<bits/stdc++.h>
using namespace std;
const int N = 25005;
int main()
{
	int T;
	cin >> T;
	while(T --) 
	{
		int n, ans, a[N] = {0};
		int f[N] = {0};
		cin >> n;
		ans = n;
		for(int i = 1; i <= n; i ++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		f[0] = 1;
		for(int i = 1; i <= n; i ++)
		{
			if(f[ a[i] ])
			{
				ans --;
				continue;
			}
			for(int j = a[i]; j <= a[n]; j ++)
			{
				f[j] = f[j] | f[j - a[i]];//这个地方不懂 
			}
		}
		cout << ans << endl;
	}
	return 0;
}
