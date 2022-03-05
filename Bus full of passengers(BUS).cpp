#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n, m, q;
		scanf("%d%d%d", &n, &m, &q);
		bool s = 0;
		map<int, int> res;
		int sum = 0;
		for(int i = 1; i <= q; i ++ )
		{
			char a[2]; 
			int b;
			scanf("%s%d", &a, &b);
			if(a[0] == '-')
			{
				if(res[b] == 0)
				{
					s = 1;
				}
				res[b] = 0;
				sum --;
			}
			if(a[0] == '+')
			{
				if(res[b] == 1)
				{
					s = 1;
				}
				res[b] = 1;
				sum ++;
				if(sum > m)
				{
					s = 1;
				}
			}
		}
		if(s == 0) printf("Consistent\n");
		else printf("Inconsistent\n");
	}
	return 0;
}
