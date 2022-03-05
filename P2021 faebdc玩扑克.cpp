#include<bits/stdc++.h> 
using namespace std;
int a[1000005];
int main()
{
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i ++ ) q.push(i);
	vector<int> ans;
	int cnt = 1;
	while (!q.empty())
	{
		if (cnt % 2 != 0)
		{
			int t = q.front();
			q.pop();
			q.push(t);
			cnt ++;
		}
		else
		{
			int t = q.front();
			q.pop();
			ans.push_back(t);
			cnt ++;
		}
	}
	
	for (int i = 0; i < ans.size(); i ++ )
	{
		a[ans[i]] = i + 1;
	}
	
	for (int i= 1; i <= n; i ++ ) cout << a[i] << " ";
	return 0;
}
