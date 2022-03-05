#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10; 

struct node{
	int a, i;
	bool operator< (const node & x) const {
		return a > x.a;
	}
};
priority_queue<node> q;
int num[N];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &num[i]);
		q.push({num[i], i});
	}
	
	while (m -- )
	{
		int cnt = 0; 
		vector<int> f; //此处要开vector，否则会T 
		int x; scanf("%d", &x);
		if (x == 0) continue;
		
		while (!q.empty())
		{
			node t = q.top();
			if (t.a > x) break;
			num[t.i] += x;
			q.pop();
			f.push_back(t.i);
			cnt ++;
		}
		for (int i = 0; i < cnt; i ++ )
		{
			q.push({num[f[i]], f[i]});
		}
	}
	
	for (int i = 1; i <= n; i ++ )
	{
		printf("%d ", num[i]);
	}
	return 0;
}
