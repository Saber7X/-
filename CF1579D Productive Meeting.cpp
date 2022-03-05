#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		priority_queue <int,vector<int>,greater<int> > q;
		int n; scanf("%d", &n);
		for (int i = 1; i <= n; i ++ )
		{
			int x; scanf("%d", &x);
			q.push(x);
		}
		int ans1[n + 5], ans2[n + 5];
		int  cnt = 0;
//		while (!q.empty())
//		{
//			int a = q.top();
//			cout << a <<" ";
//			q.pop();
//		}
//		cout << endl;
	
		while (q.size() >= 2)
		{
			int a = q.top();
			q.pop();
			int b = q.top();
			q.pop();
			cout << a << " " << b << endl;
//		    ans1[cnt] = a;
//			ans2[cnt] = b;
			a --, b --;

			cnt ++;
			
			if (a > 0) q.push(a);
			if (b > 0) q.push(b);
		}
//		printf("          %d\n", cnt);
//		for (int i = 0; i < cnt; i ++ )
//		{
//			printf("          %d %d\n");
//		}

	}
	return 0;
}
