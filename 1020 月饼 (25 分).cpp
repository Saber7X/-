#include<bits/stdc++.h> 
using namespace std;
const int N = 10005;
double a[N], b[N];
struct name{
	double x;//库存 
	double y;// 总价值 
	double z;//单价 
	
};
vector<name> v;
bool cmp(name a, name b)
{
	return a.z > b.z;
}
int main()
{
	int n;
	double k;
	cin >> n >> k;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++ )
	{
		cin >> b[i];
	}
	for (int i = 1; i <= n; i ++ )
	{
		v.push_back({a[i], b[i], b[i] / a[i]});
	}
	sort(v.begin(), v.end(), cmp);

	double sum = 0.0;
	for (auto i : v)
	{
		if (k == 0) break;
		if (i.x <= k) 
		{
			sum += i.y;
			k -= i.x;
		}
		else 
		{
			sum = sum + k * i.z; 
			k = 0;
		}
//		cout << k << endl;
	}
	printf("%.2f", sum);
	return 0;
}
