#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, x;
		scanf("%d", &n);
		
		deque<int> q;
		scanf("%d", &x);
		
		q.push_back(x);
		
		for (int i = 2; i <= n; i ++ )
		{
			scanf("%d", &x);
			if (x <= q[0]) q.push_front(x);
			else q.push_back(x);
		} 
		for (auto i : q)
		{
			printf("%d ", i);
		}
		cout << endl;
	}
	return 0;
}
