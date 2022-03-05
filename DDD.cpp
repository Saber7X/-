#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, less<int>> q;
	priority_queue<int, vector<int>, greater<int>> q1;
	int n; cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		int x; cin >> x;
		q1.push(x);
		q.push(x);
	}
	int nnn; cin >> nnn;
	while (q1.size() > 1)
	{
		int a = q1.top();
		q1.pop();
		int b = q1.top();
		q1.pop();
		q1.push(a * b + 1);
	}
	while (q.size() > 1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		q.push(a * b + 1);
	}
	cout << q1.top() - q.top() << endl;
	return 0;
}
