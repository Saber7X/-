#include<bits/stdc++.h> 
using namespace std;
int flag[24] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,  53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; 
		cin >> n;
		if (n % 2 == 0)
		{
			cout << (n - 1)/ 2 << " " << (n - 1)/2 + 1<< " " << "1"  << endl;
		}
		else
		{
			for (int i = 0; i < 24; i ++ )
			{
//				cout << n - 1 - flag[i] << " " << flag[i] << " " << (n - 1 - flag[i]) % flag[i] << endl;
				if ( (n - 1 - flag[i]) % flag[i] == 0) continue;
				cout << flag[i] << " " << n - flag[i] - 1 << " " << 1 << endl;
				break;
			}
		}
	}
	return 0;
}
/*
5241
3 5237 1
*/
