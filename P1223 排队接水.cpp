#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	pair<double, int> a[n + 10];
	for (int i = 1; i <= n; i ++ ) 
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	
	sort(a + 1, a + 1 + n);
	
	int sum[n + 10] = {0};
	
	for (int i = 1; i <= n; i ++ ) sum[i] = sum[i - 1] + a[i].first;
	
	double summ = 0.0;
	for (int i = 1; i < n; i ++ ) summ += sum[i];
	
	for (int i = 1; i <= n; i ++ ) printf("%d ", a[i].second);
	
	printf("\n%.2f", summ / (double)n);
	return 0;
}
