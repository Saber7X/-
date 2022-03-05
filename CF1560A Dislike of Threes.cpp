#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int cnt = 1;
	int num[20050]={0};
	for (int i = 1; i <= 2000; i ++  )
	{
		if (i % 3 == 0 || i % 10 == 3) continue;
		
		num[cnt ++ ] = i;
	}
	
	int t; cin >> t;
	while (t -- )
	{
		int k; cin >> k;
		cout << num[k] << endl << endl;
	}
	return 0;
}
