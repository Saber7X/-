#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int e[N * 2], ne[N * 2] , h[N * 2], idx;
int ans = N;int n;
bool st[N];

void add(int a, int b)
{
	e[idx] = b;
	//cout << e[idx] <<" ";
	ne[idx] = h[a];
	//cout<< ne[idx] << " ";
	h[a] = idx++;
	//cout << h[a]<<endl;
}
int flag = 1;
int dfs(int u)
{
	st[u] = true;
	int sum = 1, res = 0;
	for(int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		cout <<i <<" "<< e[i]<<" ";
		if(!st[j])
		{
			int ll = dfs(j);
			res = max(ll, res);
			sum += ll;
			
		}
	}
	cout << endl;
	res = max(res, n - sum );
	ans = min(ans, res);
	cout <<flag++  <<"  :  " <<res << " " << ans <<endl;
	return sum;	
}


int main()
{
	
	memset(h, -1, sizeof h);
	cin >> n;
	for(int i = 1; i <= n - 1; i ++)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	cout << endl;
	dfs(1);
	cout << ans;
	return 0;
}
