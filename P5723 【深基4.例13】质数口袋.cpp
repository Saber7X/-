#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
	if (x == 2) return true;
	else
	{
		for (int i = 2; i <= sqrt(x); i ++ )
		{
			if (x % i == 0 )
			{
				return false;
			}
		}
		return true;
	}
 } 
int main()
{
	int n;
	cin >> n;
	int sum = 0, cnt = 0;
	for (int i = 2; i <= 100005; i ++ )
	{
		if (isprime(i))
		{
			sum += i;
			if (sum > n) break;
			cout << i << endl;
			cnt ++;
		}
		
	}
	cout << cnt;
	return 0;
}
