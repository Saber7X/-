#include<bits/stdc++.h> 
using namespace std;
const int N = 1e3 + 10;
int a[N];
struct name{
	int l, r, ans, flag;
}num[N];
bool cmp(name a, name b)
{
	if (a.r == b.r)
	{
		return a.l > b.l;
	}
	return a.r < b.r;
	
}

bool cmp1(name a, name b)
{
	return a.flag < b.flag;
	
}
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i ++ )
		{
			int l, r;
			scanf("%d %d", &num[i].l, &num[i].r);
			num[i].flag = i;
		}
		sort(num + 1, num + 1 + n, cmp);
		int st[n + 10] = {0};
		
		for (int i = 1; i <= n; i ++ )
		{
//			cout << num[i].l << " " <<  num[i].r << endl;
			int ll = num[i].l, rr = num[i].r;
			
			for (int j = ll; j <= rr; j ++ )
			{
				if (st[j] == 0)
				{
					num[i].ans = j;
					st[j] = 1;
					break;
				}
			}
		}
//		sort(num + 1, num + 1 + n, cmp1);
		
		for (int i = 1; i <= n; i ++ )
		{
			cout << num[i].l << " " << num[i].r << " " << num[i].ans << endl;
		}
	}
	return 0;
}
/*
5
5
1 5
1 4
2 3
1 2
3 5
*/
