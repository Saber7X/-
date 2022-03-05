#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n, k;
		int ans = 0, cnt = 0;
		
		scanf("%d%d", &n, &k);
		int a[n + 10]={0};
		for(int i = 1; i <= n; i ++ )
		{
			scanf("%d", &a[i]);
		}
		cnt = 0;
		bool s = 0;
		bool st = 0;
		for(int i = 1; i < n; i ++ )
		{
			if(a[i] <= a[i + 1]) 
			{
				if(s == 0) 
				{
					cnt ++;
					s = 1;
				}
			}
			else
			{
				cnt ++;
				s = 0;
			}
		}
		if(cnt <= k) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
