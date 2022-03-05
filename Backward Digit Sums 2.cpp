#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100;
int n, sum, a[N], b[N];

int main()
{
	cin >> n >> sum;
	for (int i = 1; i <= n; i ++ )
	{
		a[i] = i;
	}
	bool f = 0;
	while (1)
	{
		
		int cur = n - 1;
		bool ok = 0;
		int A[n + 10] = {0};
		for (int i = 1; i <= n; i ++ )
		{
			A[i] = a[i];
		}
		
		while (cur >= 1)
		{
			
			for (int i = 1; i <= cur; i ++ )
			{
				A[i] = A[i] + A[i + 1];
			}
			cur --;
		}
		
//		cout << A[1] << endl;
		for (int i =1 ;i <= n; i ++ ) cout << a[i] << " ";
		cout << endl;
		if (A[1] == sum)
		{
			for (int i =1 ;i <= n; i ++ ) cout << a[i] << " ";
			break;
		}
		next_permutation(a + 1, a + 1 + n);
	}
	return 0;
}/////////////////////
