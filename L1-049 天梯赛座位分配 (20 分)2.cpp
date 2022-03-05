#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
int a[N];
int main()
{
	int n; cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i ++ ) 
	{
		cin >> a[i];
		sum = sum + a[i] * 10;
	}
	
	int cnt = n;
	for (int i = 1; i <= n; i ++ )
	{
		int x = i;
		cnt = n;
		cout << "#" << i << endl;
		cout << x << " ";
		int num[n + 10];
		
		for (int j = 1; j <= n; j ++ ) num[j] = a[j] * 10;
		
		for (int j = 1; j <= n; j ++ ) num[j] --;
		
		for (int j = 2; j <= 10 * a[i]; j ++ )
		{
			x += cnt;
			cout << x;
			if (j % 10 != 0) cout << " " ;
			for (int k = 1; k <= n; k ++ )
			{
				num[k] --;
				if (num[k] == 0) cnt --;
				if (cnt == 1) cnt = 2;
			}
			if (i == n && 10 * a[i] - j == 0) continue;
			if (j % 10 == 0) cout << endl;
		}
		
		
	}
	return 0;
}
