#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
//	int a[n + 10];
	double a = 0.0, b = 0.0, c = 0.0;
	for (int i  =1; i <= n; i ++ ) 
	{
		double x;
		scanf("%lf", &x);
		a += x;
	}
	for (int i = 1; i <= n; i ++ ) 
	{
		double x; scanf("%lf", &x);
		b += x;
	}
	printf("%.6f", (a * 3.0 - b * 2.0) / (a - b));
	
	return 0;
}
