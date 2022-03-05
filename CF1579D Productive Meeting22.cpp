#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

struct node
{
	int a, i;
	
	bool operator< (const node & x) const 
	{
		return a < x.a;
	}
};

priority_queue<node> q;
int main()
{
	
	int t; cin >> t;
	while (t -- )
	{
		while (!q.empty()) q.pop();
		
		int n; scanf("%d", &n);
		
		for (int i = 1; i <= n; i ++ )
		{
			int x;
			scanf("%d", &x);
			if(x > 0) q.push({x, i});
			
		}
//		while (!q.empty())
//		{
//			node tt = q.top();
//			cout << tt.i << " ";
//			q.pop();
//		}
//		cout << endl << endl; 
		int ans1[N];
		int ans2[N];
		int cnt = 0;
		while (q.size()>= 2)
		{
			node x = q.top();
			q.pop();
			node y = q.top();
			q.pop();
			
			x.a--;
			y.a--;
			ans1[cnt] = x.i;
			ans2[cnt] = y.i;
			cnt++;
//			cout << x.i << y.i << endl;
			if (x.a > 0) q.push(x);
			if (y.a > 0) q.push(y);
		}
		cout << cnt << endl;
		for (int i = 0; i < cnt; i ++ ) 
		{
			printf("%d %d\n", ans1[i], ans2[i]);
//			cout << ans1[i] << " " << ans2 << endl;
		}
		
	}
	return 0;
}
