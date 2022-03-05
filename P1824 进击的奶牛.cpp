#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;
int a[N];
int n, m;
bool check(int x)
{
	int sum = 1;
	int dis = a[1] + x;
	for (int i= 2; i <= n; i ++ )
	{
		if (a[i] >= dis)
		{
			sum ++;
			dis = a[i] + x;
		}
	}
//	cout <<x<< " ::: " << sum << endl;
	if (sum >= m) return true;
	else return false;
}

int main()
{
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) cin >> a[i];
	sort(a + 1, a + 1 + n);
	
	int l = 0, r = a[n] - a[1];
	int ans = 0;
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		if (check(mid)) 
		{
			l = mid;
			
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << r << endl;
	return 0;
}
