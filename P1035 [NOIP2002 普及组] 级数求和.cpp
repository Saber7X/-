#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int k; cin >> k;
	double sum = 0.0;
	for (int i = 1; i <= 100000000; i ++ )
	{
		sum += (1.0/(double)i);
		if (sum > k)
		{
			cout << i;
			break;
		}
	}
	
	return 0;
}
