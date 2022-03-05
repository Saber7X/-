#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int cnt = 1;
int prime[N];
bool st[N];

void get_prime()
{
	for (int i = 2; i <= N; i ++ )
	{
		if (!st[i])
		{
			prime[cnt ++ ] = i;
			for (int j = i; j <= N; j += i)
			{
				st[j] = 1;
			}
		}
	}
}

int main()
{
	get_prime();
	int n, m;
	cin >> n >> m;
	
	int c = 0;
	for (int i = n; i <= m; i ++ )
	{
		cout << prime[i];
		if (c == 9)
		{
			c = 0;
			cout << endl;
		}
		else if (i != m)
		{
			c ++;
			cout << " ";
		}
	}
	return 0;
}
