#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
	int cnt = 0;
	int ans[12000]={0};
//	for (n = 1; n <= 100; n ++ )
	while (cin >> n)
	{
		int anss = 0;
		for (int i = 1; i <= n; i ++ )
		{
			for (int j = i; j <= n; j ++ )
			{
				for (int k = j; k <= n; k ++ )
				{
					if (i * j * k <= n)
					{
						anss ++;
						cout << i << " " << j << " " << k << endl;
					}
				}
			}
		}
		cout << anss << endl << endl;
//		ans[cnt ++] = anss;
	}
//	for (int i = 1; i < cnt; i ++ )
//	{
//		cout  << ans[i] - ans[i - 1] << " " ;
//	}
	
	return 0;
}
