#include <iostream>
#include <queue>
#define int long long
using namespace std;
const int N = 1e3 + 10;
int n;

void bfs()
{
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		int a = t * 10;
		int b = a + 1;
		if (a % n ==0)
		{
			cout << a << endl;
			break;
		}
		if (b % n == 0)
		{
			cout << b << endl;
			break;
		}
		q.push(a);
		q.push(b);
	}
}

signed main()
{
	while (cin >> n)
	{
		if (n == 0) break;
		bfs();
	}
	return 0;
}
