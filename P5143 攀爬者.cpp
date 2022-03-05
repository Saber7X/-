#include<bits/stdc++.h>
using namespace std;
struct name{
	double x, y, z;
}num[50005];

bool cmp(name a, name b)
{
	return a.z < b.z;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i].x >> num[i].y >> num[i].z;
	}
	sort(num + 1, num + 1 + n, cmp);
	double sum = 0;
	for (int i = 2; i <= n; i ++ )
	{
		sum += (sqrt(  (num[i].x - num[i- 1].x) * (num[i].x - num[i- 1].x) + (num[i].y - num[i - 1].y) * (num[i].y - num[i- 1].y) + (num[i].z - num[i - 1].z) * (num[i].z - num[i- 1].z)));
	}
	printf("%.3f", sum);
	return 0;
}
