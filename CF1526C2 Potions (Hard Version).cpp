#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin >> n;
	int ans = 0; int sum = 0;
	
	priority_queue<int, vector<int>, less<int>> res;//优先队列，表示数字越大越靠前
	
	for(int i = 1; i <= n; i ++ )
	{
		int x; 
		cin >> x;
		sum += x;
		ans ++;

		if(x < 0)//把所有小于0的减血药放进去 
		{
			res.push(-x);
		}
		if(sum < 0)//如果血量小于0 
		{
			ans --;//就吐出来 
			sum += res.top();//把之前减血最多的一瓶药减掉的血加回来 
			res.pop();//去掉那瓶药 
		}
	} 
	
	cout << ans << endl;
	return 0;
}
