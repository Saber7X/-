#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int cnt = 1;
bool st[N + 10000];
int prime[N + 10000];

void get_prime()
{
	for (int i = 2; i <= N; i ++ )
	{
		if (!st[i])
		{
//			cout << i << " ";
			prime[cnt ++ ] = i;
			for (int j = i + i; j <= N; j += i)
			{
				st[j] = 1;
			}
		}
	}
}

int main()
{
	get_prime();
	int n;
	cin >> n;
	int d[n + 10];
	int ans = 0;
	for (int i = 1; i <= 1000000; i ++ )
	{
		if (prime[i + 1] > n) break;
		
		if ((prime[i + 1] - prime[i]) == 2)
		{
			ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}
