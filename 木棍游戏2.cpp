#include<bits/stdc++.h> 
using namespace std;
const int N = 100;
double a[N];

double ans = -1;

double helen(double a,double b,double c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
int n;
void dfs(double x, double y, double z, int u)
{
	if (x + y > z && abs(x - y) < z)
	{
		ans = max (ans, helen(x, y, z));
	}
	if (u > n) return;
	dfs(x + a[u], y, z, u + 1);
	dfs(x, y + a[u], z, u + 1);
	dfs(x, y, z + a[u], u + 1);
	dfs(x, y, z, u + 1);
}

int main()
{
	
	cin >> n;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	dfs(0, 0, 0, 1);
	cout << ans << endl;
	return 0;
}
