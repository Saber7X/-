#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int age[N], dream[N];
int main()
{
	int n, x;
	scanf("%d%d", &n, &x);
	for (int i= 1; i <= n; i ++ )
	{
		scanf("%d%d", &age[i], &dream[i]);
	}
	int ans = 0;
	for (int i = 1; i < n; i ++ )
	{
		if (age[i] > age[i + 1] && dream[i] == 1 && dream[i + 1] == 0 && age[i] > x && age[i + 1] <= x) 
		{
			swap(age[i], age[i + 1]);
		}
		else if (age[i] < age[i + 1] && dream[i] == 0 && dream[i + 1] == 1 && age[i] <= x && age[i + 1] > x)
		{
			swap(age[i], age[i + 1]);
		}
	}
	
	
	for (int i = 1; i <= n; i ++ )
	{
		if ((age[i] <= x && dream[i] == 1) || (age[i] > x && dream[i] == 0)) ans ++;
	}
//	cout << ans << endl;
	printf("%d\n", ans);
	return 0;
}
