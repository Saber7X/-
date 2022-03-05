#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;


int main()
{
	int a[N];
	int l[N];
	int r[N];
	int flag;
	int n, x, k;
	
	cin >> n >> x >> k;
	
	for(int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
		if(a[i] == x)  flag = i;
	}
	int cnt = 1;
	for(int i = flag - 1; i >= 1; i --  )
	{
		if(a[i] < x)
		{
			l[cnt ++ ] = i;
		}
	}
	r[0] = flag;
	l[0] = flag;
	l[cnt] = 1;
	int cnt1 = 1;
	for(int i = flag + 1; i <= n; i ++ )
	{
		if(a[i] < x)
		{
			r[cnt1 ++] = i;
		}
	}
	r[cnt1] = n;
	int ans = 0;
	for(int i = 0; i <= k - 1; i ++ )
	{
		int ll = i;
		int rr = k - 1 - i;
//		cout << ll << " " << rr << endl;
		if(cnt > ll && cnt1 > rr)
		{
			//cout<< abs(l[ll + 1] - l[ll]) << " " << abs(r[rr + 1] - r[rr]) << endl;
			if(abs(l[ll + 1] - l[ll]) - 1 != 0 && abs(r[rr + 1] - r[rr]) - 1 != 0)
			{
				ans = ans + (abs(l[ll + 1] - l[ll]) - 1) * (abs(r[rr + 1] - r[rr]) - 1);
			}
			else
			{
				ans = ans + abs(r[rr + 1] - r[rr]) + abs(l[ll + 1] - l[ll]);
			}
			
		}
	}
	cout << ans << endl;
	return 0;
		
		
		
	
}
