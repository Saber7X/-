#include<iostream>
#include<queue>
#include<algorithm>
#include<math.h>
#include<cstdio>
#include<cstring>
using namespace std;
int n, m;

int ge[10] = {1, 3, 5, 7, 9};
int shi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int bai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int qian[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

bool isprime(int x)
{
	for (int i = 2; i <= sqrt(x); i ++ )
	{
		if (x % i == 0) return false;
	}
	return true;
}
int flag[10000];
void bfs()
{
	memset(flag, -1, sizeof flag);
	
	queue<int> q;
	q.push(n);
	flag[n] = 0;
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		if (t == m) break;
		//个位修改 
		for (int i = 0; i < 5; i ++ )
		{
			int xx = t / 10 * 10 + ge[i];
			if (flag[xx] == -1 && isprime(xx))
			{
				flag[xx] = flag[t] + 1;
				q.push(xx);
			}
		}
		
		//十位修改 
		for (int i = 0; i <= 9; i ++ )
		{
			int xx = t / 100 * 10 + shi[i];
			xx = xx * 10 + t % 10;
			
			if (flag[xx] == -1 && isprime(xx))
			{
				flag[xx] = flag[t] + 1;
				q.push(xx);
			}
		}
		
		//百位修改 
		for (int i = 0; i <= 9; i ++ )
		{
			int xx = t / 1000 * 10 + bai[i];
			xx = xx * 100 + t % 100;
			
			if (flag[xx] == -1 && isprime(xx))
			{
				flag[xx] = flag[t] + 1;
				q.push(xx);
			}
		}
		
		 //千位修改 
		for (int i = 0; i <= 8; i ++ )
		{
			int xx = t / 10000 * 10 + qian[i];
			xx = xx * 1000 + t % 1000;
			
			if (flag[xx] == -1 && isprime(xx))
			{
				flag[xx] = flag[t] + 1;
				q.push(xx);
			}
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		cin >> n >> m;
		if (n == m)
		{
			cout << 0 << endl;
			continue;
		}
		bfs();
		cout << flag[m] << endl;
		
	}
	return 0;
}
