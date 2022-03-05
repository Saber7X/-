#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[n + 5];
	int a[n + 5];
	for (int i = 1; i <= n; i ++ )
	{
		int x;
		scanf("%d", &x);
//		if (x == 0) break;
		num[i] =  x;
		a[i] = num[i];
	}
	int b;
	cin >> b; 
	for (int i = 2; i <= n; i ++ )
	{
		sort(num + i - 1, num + 1 + n);
//		num[i - 1] = 0;
		num[i] = num[i] * num[i - 1] + 1;
//		cout << num[i] << " ";
	}
//	cout << endl;
	for (int i = n - 1; i >= 1; i -- )
	{
		sort(a + 1, a + 1 + i);
//		a[i + 1] = 0;
		a[i] = a[i] * a[i + 1] + 1;
//		cout << a[i] << " ";
	}
//	cout << endl;
	cout << num[n] - a[1] << endl;
	return 0;
}
